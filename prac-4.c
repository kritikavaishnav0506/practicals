#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Student information
    string studentName = "";
    string enrollmentNo = "";
    string branch = "";
    string mobileNo = "";

    int semester = 0;

    // Marks
    int mathematics = 0;
    int physics = 0;
    int cpf = 0;
    int total = 0;

    float average = 0.0;
    float percentage = 0.0;

    char grade = 'F';
    string remark = "";

    short int choice;

    // Main menu loop
    do
    {
        cout << "\n******************************************************" << endl;
        cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
        cout << "******************************************************" << endl;

        cout << "\n-------------------- MAIN MENU -----------------------" << endl;

        cout << "1. Register new student" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Enter Student Marks" << endl;
        cout << "4. Display Academic Marks" << endl;
        cout << "5. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            // ------------------------------------------------
            // CASE 1: REGISTER STUDENT
            // ------------------------------------------------
            case 1:
            {
                cout << "\n******************************************************" << endl;
                cout << "              STUDENT REGISTRATION" << endl;
                cout << "******************************************************" << endl;

                cout << left << setw(20) << "Enrollment number" << ": ";
                cin >> enrollmentNo;

                cin.ignore();

                cout << left << setw(20) << "Student Name" << ": ";
                getline(cin, studentName);

                cout << left << setw(20) << "Branch" << ": ";
                cin >> branch;

                cout << left << setw(20) << "Semester" << ": ";
                cin >> semester;

                cout << left << setw(20) << "Mobile Number" << ": ";
                cin >> mobileNo;

                cout << "\nStudent registered successfully!" << endl;

                break;
            }

            // ------------------------------------------------
            // CASE 2: DISPLAY STUDENT RECORD
            // ------------------------------------------------
            case 2:
            {
                cout << "\n--------------------------------------------------" << endl;
                cout << "              STUDENT RECORD" << endl;
                cout << "--------------------------------------------------" << endl;

                if (enrollmentNo == "")
                {
                    cout << "No student record found." << endl;
                    cout << "Please register the student first." << endl;
                }
                else
                {
                    cout << left << setw(20) << "Enrollment number"
                         << ": " << enrollmentNo << endl;

                    cout << left << setw(20) << "Student Name"
                         << ": " << studentName << endl;

                    cout << left << setw(20) << "Branch"
                         << ": " << branch << endl;

                    cout << left << setw(20) << "Semester"
                         << ": " << semester << endl;

                    cout << left << setw(20) << "Mobile Number"
                         << ": " << mobileNo << endl;
                }

                break;
            }

            // ------------------------------------------------
            // CASE 3: ENTER STUDENT MARKS
            // ------------------------------------------------
            case 3:
            {
                cout << "\n--------------------------------------------------" << endl;
                cout << "              ENTER STUDENT MARKS" << endl;
                cout << "--------------------------------------------------" << endl;

                if (enrollmentNo == "")
                {
                    cout << "Please register the student first." << endl;
                }
                else
                {
                    cout << left << setw(20) << "Mathematics" << ": ";
                    cin >> mathematics;

                    cout << left << setw(20) << "CPF" << ": ";
                    cin >> cpf;

                    cout << left << setw(20) << "Physics" << ": ";
                    cin >> physics;

                    // Calculate result
                    total = mathematics + physics + cpf;
                    average = total / 3.0;
                    percentage = (total / 300.0) * 100;

                    cout << "\nMarks entered successfully!" << endl;
                }

                break;
            }

            // ------------------------------------------------
            // CASE 4: DISPLAY ACADEMIC RESULT
            // ------------------------------------------------
            case 4:
            {
                cout << "\n--------------------------------------------------" << endl;
                cout << "              ACADEMIC RESULT" << endl;
                cout << "--------------------------------------------------" << endl;

                if (enrollmentNo == "")
                {
                    cout << "Please register the student first." << endl;
                }
                else
                {
                    // Check whether marks have been entered
                    if (mathematics == 0 && physics == 0 && cpf == 0)
                    {
                        cout << "Please enter student marks first." << endl;
                    }
                    else
                    {
                        total = mathematics + physics + cpf;
                        average = total / 3.0;
                        percentage = (total / 300.0) * 100;

                        cout << left << setw(20)
                             << "Mathematics" << ": "
                             << mathematics << endl;

                        cout << left << setw(20)
                             << "Physics" << ": "
                             << physics << endl;

                        cout << left << setw(20)
                             << "CPF" << ": "
                             << cpf << endl;

                        cout << left << setw(20)
                             << "Total Marks" << ": "
                             << total << "/300" << endl;

                        cout << left << setw(20)
                             << "Average" << ": "
                             << fixed << setprecision(2)
                             << average << endl;

                        cout << left << setw(20)
                             << "Percentage" << ": "
                             << percentage << "%" << endl;

                        // Pass / Fail
                        if (percentage >= 40.0)
                        {
                            cout << "Academic Result: PASSED" << endl;
                        }
                        else
                        {
                            cout << "Academic Result: FAILED" << endl;
                        }

                        // Grade and remark
                        if (percentage >= 90 && percentage <= 100)
                        {
                            grade = 'O';
                            remark = "Outstanding";
                        }
                        else if (percentage >= 80)
                        {
                            grade = 'A';
                            remark = "Excellent";
                        }
                        else if (percentage >= 70)
                        {
                            grade = 'A';
                            remark = "Very Good";
                        }
                        else if (percentage >= 60)
                        {
                            grade = 'B';
                            remark = "Good";
                        }
                        else if (percentage >= 50)
                        {
                            grade = 'B';
                            remark = "Satisfactory";
                        }
                        else if (percentage >= 40)
                        {
                            grade = 'C';
                            remark = "Needs Improvement";
                        }
                        else
                        {
                            grade = 'F';
                            remark = "Failed";
                        }

                        cout << left << setw(20)
                             << "Grade" << ": "
                             << grade << endl;

                        cout << left << setw(20)
                             << "Remark" << ": "
                             << remark << endl;
                    }
                }

                break;
            }

            // ------------------------------------------------
            // CASE 5: EXIT
            // ------------------------------------------------
            case 5:
            {
                cout << "\nThank you for using Student Record "
                     << "Management System!" << endl;

                break;
            }

            // ------------------------------------------------
            // INVALID CHOICE
            // ------------------------------------------------
            default:
            {
                cout << "\nInvalid choice!" << endl;
                cout << "Please enter a number between 1 and 5." << endl;
            }
        }

    } while (choice != 5);

    return 0;
}

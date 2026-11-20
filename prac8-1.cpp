#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global variables
string enrollmentNo, studentName, branch;
int semester;
int marks[5];
int totalMarks = 0;
float percentage;
string grade, result;

// Function to display header
void displayHeader()
{
    cout << "***********************************************" << endl;
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "***********************************************" << endl;
}

// Function to accept student details
void acceptStudentDetails()
{
    cout << "\n---------- Student Registration ----------\n";

    cout << "Enter Enrollment Number : ";
    cin >> enrollmentNo;

    cin.ignore();
    cout << "Enter Student Name      : ";
    getline(cin, studentName);

    cout << "Enter Branch            : ";
    getline(cin, branch);

    cout << "Enter Semester          : ";
    cin >> semester;

    cout << "\nEnter Marks\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : ";
        cin >> marks[i];
    }
}

// Function to calculate academic result
void calculateAcademicResult()
{
    totalMarks = 0;
    bool passed = true;

    for (int i = 0; i < 5; i++)
    {
        totalMarks += marks[i];

        if (marks[i] < 35)
        {
            passed = false;
        }
    }

    percentage = totalMarks / 5.0;

    if (percentage >= 80)
        grade = "A+";
    else if (percentage >= 70)
        grade = "A";
    else if (percentage >= 60)
        grade = "B+";
    else if (percentage >= 50)
        grade = "B";
    else if (percentage >= 40)
        grade = "C";
    else
        grade = "F";

    if (passed)
        result = "PASS";
    else
        result = "FAIL";
}

// Function to display student report
void displayStudentReport()
{
    cout << "\n----------------------------------------\n";
    cout << "             Academic Report\n";
    cout << "----------------------------------------\n";

    cout << "Enrollment Number : " << enrollmentNo << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;

    cout << "\nTotal Marks       : " << totalMarks << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage        : " << percentage << "%" << endl;
    cout << "Grade             : " << grade << endl;
    cout << "Result            : " << result << endl;

    cout << "----------------------------------------\n";
    cout << "Program Executed Successfully Using User-defined Functions.\n";
    cout << "----------------------------------------\n";
}

// Main function
int main()
{
    displayHeader();

    acceptStudentDetails();

    calculateAcademicResult();

    displayStudentReport();

    return 0;
}

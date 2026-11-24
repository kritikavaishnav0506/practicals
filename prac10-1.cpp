#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

// Part B: Nested Structures
struct AcademicInfo
{
    int semester;
    float percentage;
    string grade;
};

struct ContactInfo
{
    string mobile;
    string email;
};

// Part A: Student Structure
struct Student
{
    string enrollmentNumber;
    string name;
    string branch;

    AcademicInfo academic;
    ContactInfo contact;
};

// Part D: Display Student Details using Pointer
void displayStudent(Student *s)
{
    cout << "\nEnrollment Number : " << s->enrollmentNumber;
    cout << "\nStudent Name      : " << s->name;
    cout << "\nBranch            : " << s->branch;
    cout << "\nSemester          : " << s->academic.semester;
    cout << "\nPercentage        : " << fixed
         << setprecision(2) << s->academic.percentage;
    cout << "\nGrade             : " << s->academic.grade;
    cout << "\nMobile Number     : " << s->contact.mobile;
    cout << "\nEmail ID          : " << s->contact.email;
    cout << endl;
}

// Update Contact Information using Pointer
void updateContact(Student *s)
{
    cout << "\nEnter New Mobile Number: ";
    cin >> s->contact.mobile;

    cout << "Enter New Email ID: ";
    cin >> s->contact.email;

    cout << "\nContact Information Updated Successfully!\n";
}

// Display Academic Information using Pointer
void displayAcademic(Student *s)
{
    cout << "\nAcademic Information";
    cout << "\nSemester   : " << s->academic.semester;
    cout << "\nPercentage : " << fixed
         << setprecision(2) << s->academic.percentage;
    cout << "\nGrade      : " << s->academic.grade;
    cout << endl;
}

int main()
{
    int n;

    cout << "******************************************\n";
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "******************************************\n";

    cout << "\nEnter Number of Students : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students!";
        return 0;
    }

    // Part C: Array of Structures
    vector<Student> students(n);

    // Accept Student Details
    for (int i = 0; i < n; i++)
    {
        cout << "\n------------------------------------------\n";
        cout << "Student " << i + 1 << endl;

        cout << "\nEnrollment Number : ";
        cin >> students[i].enrollmentNumber;

        cout << "Student Name      : ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Branch            : ";
        cin >> students[i].branch;

        cout << "Semester          : ";
        cin >> students[i].academic.semester;

        cout << "Percentage        : ";
        cin >> students[i].academic.percentage;

        cout << "Grade             : ";
        cin >> students[i].academic.grade;

        cout << "Mobile Number     : ";
        cin >> students[i].contact.mobile;

        cout << "Email ID          : ";
        cin >> students[i].contact.email;
    }

    // Display All Student Details
    cout << "\n\n==========================================\n";
    cout << "             STUDENT DETAILS\n";
    cout << "==========================================\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1;
        displayStudent(&students[i]);

        cout << "------------------------------------------\n";
    }

    // Display Student Records
    cout << "\n              STUDENT RECORDS\n";
    cout << "==========================================\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n" << students[i].enrollmentNumber
             << "  " << students[i].name
             << "  " << students[i].branch;

        displayAcademic(&students[i]);

        cout << "Mobile : " << students[i].contact.mobile;
        cout << "\nEmail  : " << students[i].contact.email;
        cout << "\n------------------------------------------\n";
    }

    // Part D: Pointer-based Contact Update
    int choice;

    cout << "\nDo you want to update contact information?";
    cout << "\n1. Yes";
    cout << "\n2. No";
    cout << "\nEnter Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int index;

        cout << "Enter Student Number (1 to " << n << "): ";
        cin >> index;

        if (index >= 1 && index <= n)
        {
            updateContact(&students[index - 1]);

            cout << "\nUpdated Student Details:";
            displayStudent(&students[index - 1]);
        }
        else
        {
            cout << "Invalid Student Number!";
        }
    }

    cout << "\nProgram Executed Successfully\n";
    cout << "==========================================\n";

    return 0;
}

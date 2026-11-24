#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Student Information
    string enrollmentNumber, studentName, branch, mobileNumber;
    int semester;

    // Subject Marks
    float mathematics, physics, programming;
    float totalMarks, averageMarks, percentage;

    cout << "********************************************" << endl;
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    cout << "\nSoftware Version : 1.2" << endl;

    // Student Registration
    cout << "\n--------------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "\nEnter Enrollment Number : ";
    cin >> enrollmentNumber;

    cin.ignore();

    cout << "Enter Student Name      : ";
    getline(cin, studentName);

    cout << "Enter Branch            : ";
    getline(cin, branch);

    cout << "Enter Semester          : ";
    cin >> semester;

    cout << "Enter Mobile Number     : ";
    cin >> mobileNumber;

    // Academic Information
    cout << "\n--------------------------------------------" << endl;
    cout << "Academic Information" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "\nEnter Mathematics Marks              : ";
    cin >> mathematics;

    cout << "Enter Physics Marks                   : ";
    cin >> physics;

    cout << "Enter Programming Foundation Marks    : ";
    cin >> programming;

    // Calculate Academic Results
    totalMarks = mathematics + physics + programming;

    averageMarks = totalMarks / 3;

    percentage = (totalMarks / 300) * 100;

    // Academic Summary
    cout << fixed << setprecision(2);

    cout << "\n--------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "\nTotal Marks    : " << totalMarks << endl;
    cout << "Average Marks  : " << averageMarks << endl;
    cout << "Percentage     : " << percentage << "%" << endl;

    // Display Complete Student Information
    cout << "\n--------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "\nEnrollment Number : " << enrollmentNumber << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;
    cout << "Mobile Number     : " << mobileNumber << endl;

    cout << "\nMathematics Marks : " << mathematics << endl;
    cout << "Physics Marks     : " << physics << endl;
    cout << "Programming Marks : " << programming << endl;

    cout << "\n--------------------------------------------" << endl;
    cout << "       RECORD COMPLETED SUCCESSFULLY" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

 #include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student
{
    string enrollmentNo;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

// Function to calculate grade
string calculateGrade(float percentage)
{
    if (percentage >= 90)
        return "O";
    else if (percentage >= 85)
        return "A+";
    else if (percentage >= 80)
        return "A";
    else if (percentage >= 70)
        return "B+";
    else if (percentage >= 60)
        return "B";
    else if (percentage >= 50)
        return "C";
    else
        return "F";
}

// Display all student records using address
void displayRecords(Student *ptr, int n)
{
    cout << "\nStudent Records using Address-based Access\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nAddress : " << (void *)(ptr + i) << endl;

        cout << ptr[i].enrollmentNo << "   "
             << ptr[i].name << "   "
             << ptr[i].branch << "   "
             << ptr[i].semester << "   "
             << fixed << setprecision(2)
             << ptr[i].percentage << "   "
             << ptr[i].grade << endl;

        cout << "----------------------------------------\n";
    }
}

// Calculate class average
void calculateAverage(Student *ptr, int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (ptr + i)->percentage;
    }

    cout << "\nClass Average Percentage : "
         << fixed << setprecision(2)
         << sum / n << " %\n";
}

// Display highest percentage
void displayHighest(Student *ptr, int n)
{
    float highest = ptr->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->percentage > highest)
            highest = (ptr + i)->percentage;
    }

    cout << "Highest Percentage       : "
         << fixed << setprecision(2)
         << highest << " %\n";
}

// Display lowest percentage
void displayLowest(Student *ptr, int n)
{
    float lowest = ptr->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->percentage < lowest)
            lowest = (ptr + i)->percentage;
    }

    cout << "Lowest Percentage        : "
         << fixed << setprecision(2)
         << lowest << " %\n";
}

int main()
{
    int n;

    cout << "****************************************\n";
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "****************************************\n";

    // Part A - Dynamic Memory Allocation
    cout << "\nEnter Number of Students : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid Number of Students!";
        return 0;
    }

    Student *students = new Student[n];

    cout << "\nDynamic Memory Allocated Successfully\n";

    cout << "\n----------------------------------------\n";
    cout << "Enter Student Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enrollment Number : ";
        cin >> students[i].enrollmentNo;

        cout << "Student Name      : ";
        cin >> ws;
        getline(cin, students[i].name);

        cout << "Branch            : ";
        cin >> students[i].branch;

        cout << "Semester          : ";
        cin >> students[i].semester;

        cout << "Percentage        : ";
        cin >> students[i].percentage;

        students[i].grade =
            calculateGrade(students[i].percentage);

        cout << "Grade             : "
             << students[i].grade << endl;

        cout << "----------------------------------------\n";
    }

    // Part B - Offset-based Memory Access
    cout << "\nStudent Records using Sequential Access\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Enrollment Number : "
             << students[i].enrollmentNo << endl;
        cout << "Student Name      : "
             << students[i].name << endl;
        cout << "Branch            : "
             << students[i].branch << endl;
        cout << "Semester          : "
             << students[i].semester << endl;
        cout << "Percentage        : "
             << students[i].percentage << endl;
        cout << "Grade             : "
             << students[i].grade << endl;
    }

    // Address-based traversal using pointer arithmetic
    displayRecords(students, n);

    // Part C - Address-based Function Access
    cout << "\n----------------------------------------\n";
    cout << "Academic Summary\n";

    calculateAverage(students, n);
    displayHighest(students, n);
    displayLowest(students, n);

    // Part D - Dynamic Memory Deallocation
    delete[] students;

    cout << "\n----------------------------------------\n";
    cout << "Dynamic Memory Released Successfully\n";

    students = nullptr;

    cout << "Address Variable Reset Successfully\n";

    cout << "\n----------------------------------------\n";
    cout << "Program Executed Successfully\n";

    return 0;
}

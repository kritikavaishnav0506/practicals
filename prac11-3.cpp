#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

struct Student {
    string enrollmentNo;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

int main() {
    cout << "****************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "****************************************\n";

    // Part A & Part D: Create and open StudentRecords.txt for writing
    ofstream outFile("StudentRecords.txt");
    if (!outFile.is_open()) {
        cerr << "Error: StudentRecords.txt could not be created.\n";
        return 1;
    }
    cout << "StudentRecords.txt Created Successfully\n\n";

    int n;
    cout << "Enter Number of Students : ";
    while (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Enter a positive number of students : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Student* students = new Student[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << (i + 1) << "\n";
        cout << "Enrollment Number : ";
        cin >> ws;
        getline(cin, students[i].enrollmentNo);

        cout << "Student Name : ";
        getline(cin, students[i].name);

        cout << "Branch : ";
        getline(cin, students[i].branch);

        cout << "Semester : ";
        cin >> students[i].semester;

        cout << "Percentage : ";
        cin >> students[i].percentage;

        cout << "Grade : ";
        cin >> ws;
        getline(cin, students[i].grade);

        // Write structured fields to StudentRecords.txt (one field per line for easy reading)
        outFile << students[i].enrollmentNo << "\n"
                << students[i].name << "\n"
                << students[i].branch << "\n"
                << students[i].semester << "\n"
                << fixed << setprecision(2) << students[i].percentage << "\n"
                << students[i].grade << "\n";

        if (outFile.fail()) {
            cerr << "Error: Failed while writing record for Student " << (i + 1) << ".\n";
            delete[] students;
            outFile.close();
            return 1;
        }
    }

    outFile.close();
    delete[] students;

    cout << "\n----------------------------------------\n";
    cout << "Student Records Stored Successfully\n\n";
    cout << "------------------------------------------\n";

    // Part B & Part D: Open StudentRecords.txt in read mode and display all records
    ifstream inFile("StudentRecords.txt");
    if (!inFile.is_open()) {
        cerr << "Error: StudentRecords.txt could not be opened for reading.\n";
        return 1;
    }

    cout << "Reading StudentRecords.txt\n";

    Student temp;
    while (true) {
        if (!getline(inFile, temp.enrollmentNo) || temp.enrollmentNo.empty()) {
            break;
        }
        if (!getline(inFile, temp.name) ||
            !getline(inFile, temp.branch) ||
            !(inFile >> temp.semester) ||
            !(inFile >> temp.percentage)) {
            if (inFile.eof()) break;
            cerr << "Error: Corrupted record encountered while reading StudentRecords.txt.\n";
            inFile.close();
            return 1;
        }
        inFile.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!getline(inFile, temp.grade)) {
            if (inFile.eof()) break;
            cerr << "Error: Missing grade while reading StudentRecords.txt.\n";
            inFile.close();
            return 1;
        }

        cout << "Enrollment : " << temp.enrollmentNo << "\n";
        cout << "Name : " << temp.name << "\n";
        cout << "Branch : " << temp.branch << "\n";
        cout << "Semester : " << temp.semester << "\n";
        cout << "Percentage : " << fixed << setprecision(2) << temp.percentage << "\n";
        cout << "Grade : " << temp.grade << "\n\n";
    }

    // Detect end-of-file
    if (inFile.eof()) {
        cout << "----------------------------------------\n";
        cout << "End of File Reached Successfully\n\n";
        cout << "----------------------------------------\n";

    } else if (inFile.fail()) {
        cerr << "Error: File reading failed before reaching end of file.\n";
        inFile.close();
        return 1;
    }

    inFile.close();

    // Part C & Part D: Backup StudentRecords.txt to BackupStudentRecords.txt
    cout << "Creating BackupStudentRecords.txt\n";

    ifstream srcFile("StudentRecords.txt");
    if (!srcFile.is_open()) {
        cerr << "Error: Could not open StudentRecords.txt for backup.\n";
        return 1;
    }

    ofstream backupFile("BackupStudentRecords.txt");
    if (!backupFile.is_open()) {
        cerr << "Error: BackupStudentRecords.txt could not be created.\n";
        srcFile.close();
        return 1;
    }

    backupFile << srcFile.rdbuf();
    if (backupFile.fail()) {
        cerr << "Error: Failed while copying data to BackupStudentRecords.txt.\n";
        srcFile.close();
        backupFile.close();
        return 1;
    }

    srcFile.close();
    backupFile.close();

    cout << "Backup Completed Successfully\n";

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Programe Executed Successfully"<<endl;
    cout<<"-----------------------------------------------"<<endl;

    return 0;
}


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    string enrollment[MAX], name[MAX], grade[MAX];
    float percentage[MAX];
    int n;

    cout << "****************************************\n";
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "****************************************\n\n";

    cout << "Enter Number of Students : ";
    cin >> n;

    cout << "\nEnter Student Details\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Enrollment Number : ";
        cin >> enrollment[i];

        cout << "Enter Student Name : ";
        getline(cin >> ws, name[i]);

        cout << "Enter Percentage : ";
        cin >> percentage[i];

        cout << "Enter Grade : ";
        cin >> grade[i];
    }

    // Display current student records
    cout << "\n----------------------------------------\n";
    cout << "Current Student Records\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << "  "
             << name[i] << "  "
             << fixed << setprecision(2)
             << percentage[i] << endl;
    }

    // Insert new student
    int pos;

    cout << "\n----------------------------------------\n";
    cout << "Insert New Student\n\n";

    cout << "Enter Position : ";
    cin >> pos;

    if (pos >= 1 && pos <= n + 1 && n < MAX)
    {
        pos--;

        for (int i = n; i > pos; i--)
        {
            enrollment[i] = enrollment[i - 1];
            name[i] = name[i - 1];
            percentage[i] = percentage[i - 1];
            grade[i] = grade[i - 1];
        }

        cout << "Enter Enrollment Number : ";
        cin >> enrollment[pos];

        cout << "Enter Student Name : ";
        getline(cin >> ws, name[pos]);

        cout << "Enter Percentage : ";
        cin >> percentage[pos];

        cout << "Enter Grade : ";
        cin >> grade[pos];

        n++;

        cout << "\nRecord Inserted Successfully.\n";
    }
    else
    {
        cout << "Invalid Position!\n";
    }

    // Display updated records
    cout << "\n----------------------------------------\n";
    cout << "Updated Student Records\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << "  "
             << name[i] << "  "
             << fixed << setprecision(2)
             << percentage[i] << endl;
    }

    // Update student record
    string searchID;
    float newPercentage;
    string newGrade;
    bool found = false;

    cout << "\n----------------------------------------\n";
    cout << "Update Student Record\n\n";

    cout << "Enter Enrollment Number : ";
    cin >> searchID;

    for (int i = 0; i < n; i++)
    {
        if (enrollment[i] == searchID)
        {
            cout << "Enter New Percentage : ";
            cin >> newPercentage;

            cout << "Enter New Grade : ";
            cin >> newGrade;

            percentage[i] = newPercentage;
            grade[i] = newGrade;

            found = true;

            cout << "\nRecord Updated Successfully.\n";
            break;
        }
    }

    if (!found)
    {
        cout << "Student Record Not Found!\n";
    }

    // Delete student record
    cout << "\n----------------------------------------\n";
    cout << "Delete Student Record\n\n";

    cout << "Enter Position : ";
    cin >> pos;

    if (pos >= 1 && pos <= n)
    {
        pos--;

        for (int i = pos; i < n - 1; i++)
        {
            enrollment[i] = enrollment[i + 1];
            name[i] = name[i + 1];
            percentage[i] = percentage[i + 1];
            grade[i] = grade[i + 1];
        }

        n--;

        cout << "\nRecord Deleted Successfully.\n";
    }
    else
    {
        cout << "Invalid Position!\n";
    }

    // Display final student records
    cout << "\n----------------------------------------\n";
    cout << "Final Student Records\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << "  "
             << name[i] << "  "
             << fixed << setprecision(2)
             << percentage[i] << "  "
             << grade[i] << endl;
    }

    cout << "\n----------------------------------------\n";

    return 0;
}


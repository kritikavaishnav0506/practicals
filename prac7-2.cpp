#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char enrollment[30], name[100], branch[30];
    char keyword[50], reference[150];

    cout << "********************************************\n";
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n\n";

    // Accept student information
    cout << "Enter Enrollment Number : ";
    cin >> enrollment;

    cin.ignore();

    cout << "Enter Student Name      : ";
    cin.getline(name, 100);

    cout << "Enter Branch            : ";
    cin.getline(branch, 30);

    cout << "\n--------------------------------------------\n";

    // 1. Manual String Concatenation
    int i = 0, j = 0;

    while (name[i] != '\0')
    {
        reference[i] = name[i];
        i++;
    }

    reference[i++] = '-';

    while (enrollment[j] != '\0')
    {
        reference[i++] = enrollment[j++];
    }

    reference[i] = '\0';

    cout << "\nStudent Reference\n";
    cout << reference << endl;

    // 2. Extract First Name and Last Name Manually
    char firstName[50], lastName[50];

    i = 0;
    while (name[i] != ' ' && name[i] != '\0')
    {
        firstName[i] = name[i];
        i++;
    }
    firstName[i] = '\0';

    if (name[i] == ' ')
        i++;

    j = 0;
    while (name[i] != '\0')
    {
        lastName[j++] = name[i++];
    }
    lastName[j] = '\0';

    cout << "\nFirst Name\n";
    cout << firstName << endl;

    cout << "\nLast Name\n";
    cout << lastName << endl;

    // 3. Manual Keyword Searching
    cout << "\nEnter Keyword : ";
    cin.getline(keyword, 50);

    bool found = false;

    int n = strlen(name);
    int m = strlen(keyword);

    for (i = 0; i <= n - m; i++)
    {
        int k;

        for (k = 0; k < m; k++)
        {
            if (name[i + k] != keyword[k])
                break;
        }

        if (k == m)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "\nKeyword Found.\n";
    else
        cout << "\nKeyword Not Found.\n";

    cout << "\n--------------------------------------------\n";

    // 4. Repeat Operations Using Standard String Functions

    // Concatenation using strcat()
    char ref2[150];
    strcpy(ref2, name);
    strcat(ref2, "-");
    strcat(ref2, enrollment);

    cout << "\nReference using strcat():\n";
    cout << ref2 << endl;

    // Extraction using string functions
    string studentName = name;

    size_t pos = studentName.find(' ');

    string first = studentName.substr(0, pos);
    string last = "";

    if (pos != string::npos)
        last = studentName.substr(pos + 1);

    cout << "\nFirst Name using substr():\n";
    cout << first << endl;

    cout << "\nLast Name using substr():\n";
    cout << last << endl;

    // Searching using find()
    string key = keyword;

    if (studentName.find(key) != string::npos)
        cout << "\nKeyword Found using find().\n";
    else
        cout << "\nKeyword Not Found using find().\n";

    // 5. Complete Student Report
    cout << "\n--------------------------------------------\n";

    cout << "\nStudent Report\n\n";

    cout << "Enrollment Number : " << enrollment << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << branch << endl;

    cout << "\n--------------------------------------------\n";

    return 0;
}

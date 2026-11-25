
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;


    cout << "********************************************" << endl;
    cout << "FILE ORGANIZATION & FILE OPERATIONS UTILITY" << endl;
    cout << "********************************************" << endl;

    ofstream fout("Document.txt", ios::binary);

    if (!fout)
    {
        cout << "Error: Unable to Create File." << endl;
        return 0;
    }

    cout << "\nDocument.txt Created Successfully" << endl;

    cout << "\nEnter File Contents" << endl;

    string line1 = "Programming Fundamentals Laboratory";
    string line2 = "Student Record Management System";
    string line3 = "File Handling Practical";

    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;

    fout << line1 << "\n";
    fout << line2 << "\n";
    fout << line3 << "\n";

    fout.close();

    cout << "----------------------------------------" << endl;

    cout << "\nData Written Successfully" << endl;

    cout << "----------------------------------------" << endl;


    // PART B: File Reading
    cout << "\nReading Document.txt" << endl;

    ifstream fin("Document.txt", ios::binary);

    if (!fin)
    {
        cout << "Error: Unable to Open File." << endl;
        return 0;
    }

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    cout << "----------------------------------------" << endl;

    cout << "\nEnd of File Reached Successfully" << endl;

    cout << "----------------------------------------" << endl;


    // PART C: File Copying
    cout << "\nCreating BackupDocument.txt" << endl;

    ifstream source("Document.txt", ios::binary);
    ofstream destination("BackupDocument.txt", ios::binary);

    if (!source || !destination)
    {
        cout << "Error: Unable to Open File." << endl;
        return 0;
    }

    char ch;

    while (source.get(ch))
    {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "Contents Copied Successfully" << endl;
    cout << "Backup File Created Successfully" << endl;

    cout << "----------------------------------------" << endl;


    // PART D: Random File Access
    cout << "\nCurrent File Position : ";

    fstream file("Document.txt", ios::in | ios::binary);

    if (!file)
    {
        cout << "Error: Unable to Open File." << endl;
        return 0;
    }

    file.seekg(78);
    cout << file.tellg() << endl;

    cout << "Moving File Pointer..." << endl;

    file.seekg(36);

    cout << "Displaying Contents after Repositioning" << endl;

    getline(file, line);
    cout << line << endl;

    cout << "----------------------------------------" << endl;

    cout << "\nResetting File Pointer" << endl;

    file.clear();
    file.seekg(0);

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    cout << "----------------------------------------" << endl;

    cout << "\nProgram Executed Successfully" << endl;

    cout << "----------------------------------------" << endl;

    return 0;
}


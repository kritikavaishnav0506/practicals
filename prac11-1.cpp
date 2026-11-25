#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

// Global variable
int globalVar = 100;

int main()
{
    cout << "****************************************" << endl;
    cout << "PROGRAM EXECUTION & ERROR HANDLING ANALYZER" << endl;
    cout << "****************************************" << endl;

    // 1. Compile-time and Run-time Memory
    cout << "\nCompile-time and Run-time Memory" << endl;

    int localVar = 200;
    int *dynamicVar = new int(300);

    cout << "Global Variable Value : " << globalVar << endl;
    cout << "Local Variable Value : " << localVar << endl;
    cout << "Dynamic Memory Value : " << *dynamicVar << endl;

    // 2. Low-level Error Demonstration
    cout << "----------------------------------------" << endl;
    cout << "Low-level Error Demonstration" << endl;

    int a = numeric_limits<int>::max();

    // Safe overflow checking
    if (a > numeric_limits<int>::max() / 2)
    {
        cout << "Arithmetic Overflow Observed" << endl;
    }

    // 3. Pointer Aliasing
    cout << "----------------------------------------" << endl;
    cout << "Pointer Aliasing" << endl;

    int num = 50;
    int *ptr1 = &num;
    int *ptr2 = ptr1;

    cout << "Original Value : " << num << endl;

    *ptr2 = 75;

    cout << "Updated Value : " << *ptr1 << endl;
    cout << "Both Address Variables Refer to the Same Memory" << endl;
    cout << "Location" << endl;

    // 4. Memory Leak Demonstration
    cout << "----------------------------------------" << endl;
    cout << "Memory Leak Demonstration" << endl;

    cout << "Dynamic Memory Allocated" << endl;

    delete dynamicVar;
    dynamicVar = nullptr;

    cout << "Memory Released Successfully" << endl;

    // 5. Arithmetic Operation and Error Handling
    cout << "----------------------------------------" << endl;
    cout << "Arithmetic Operation" << endl;

    double dividend, divisor;

    cout << "Enter Dividend : ";

    if (!(cin >> dividend))
    {
        cout << "Error : Invalid Numerical Input." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else
    {
        cout << "Enter Divisor : ";

        if (!(cin >> divisor))
        {
            cout << "Error : Invalid Numerical Input." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (divisor == 0)
        {
            cout << "\nError : Division by Zero is not Allowed." << endl;
        }
        else
        {
            cout << "Result : " << dividend / divisor << endl;
        }
    }

    // 6. File Operation
    cout << "----------------------------------------" << endl;
    cout << "File Operation" << endl;

    ifstream file("nonexistent.txt");

    if (!file.is_open())
    {
        cout << "Unable to Open File." << endl;
    }
    else
    {
        cout << "File Opened Successfully." << endl;
        file.close();
    }

    cout << "----------------------------------------" << endl;
    cout << "Program Executed Successfully" << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}

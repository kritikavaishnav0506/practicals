
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

// Global Variable
int globalValue = 100;

int main()
{
    cout << "********************************************" << endl;
    cout << "PROGRAM EXECUTION & ERROR HANDLING" << endl;
    cout << "ANALYZER" << endl;
    cout << "********************************************" << endl;

    // PART A: Compile-time and Run-time Memory
    cout << "\nCompile-time and Run-time Memory" << endl;

    int localValue = 200;

    int *dynamicValue = new int;
    *dynamicValue = 300;

    cout << "Global Variable Value : " << globalValue << endl;
    cout << "Local Variable Value : " << localValue << endl;
    cout << "Dynamic Memory Value : " << *dynamicValue << endl;

    delete dynamicValue;
    dynamicValue = nullptr;

    cout << "----------------------------------------" << endl;

    // PART B: Low-level Error Demonstration
    cout << "\nLow-level Error Demonstration" << endl;

    int maximum = numeric_limits<int>::max();
    long long result = (long long)maximum + 1;

    if (result > maximum)
    {
        cout << "Arithmetic Overflow Observed" << endl;
    }

    cout << "----------------------------------------" << endl;

    // Pointer Aliasing
    cout << "\nPointer Aliasing" << endl;

    int value = 50;

    int *ptr1 = &value;
    int *ptr2 = &value;

    cout << "Original Value : " << *ptr1 << endl;

    *ptr1 = 75;

    cout << "Updated Value : " << *ptr2 << endl;

    cout << "Both Address Variables Refer to the Same Memory" << endl;
    cout << "Location" << endl;

    cout << "----------------------------------------" << endl;

    // Memory Leak Demonstration
    cout << "\nMemory Leak Demonstration" << endl;

    int *ptr = new int;

    cout << "Dynamic Memory Allocated" << endl;

    delete ptr;
    ptr = nullptr;

    cout << "Memory Released Successfully" << endl;

    cout << "----------------------------------------" << endl;

    // PART C: Arithmetic Operation
    cout << "\nArithmetic Operation" << endl;

    int dividend, divisor;

    cout << "Enter Dividend : ";
    if (!(cin >> dividend))
    {
        cout << "Error : Invalid Numerical Input." << endl;
        return 0;
    }

    cout << "Enter Divisor : ";
    if (!(cin >> divisor))
    {
        cout << "Error : Invalid Numerical Input." << endl;
        return 0;
    }

    if (divisor == 0)
    {
        cout << "Error : Division by Zero is not Allowed." << endl;
    }
    else
    {
        cout << "Result : " << (float)dividend / divisor << endl;
    }

    cout << "----------------------------------------" << endl;

    // PART D: File Operation
    cout << "\nFile Operation" << endl;

    ifstream file("data.txt");

    if (!file)
    {
        cout << "Unable to Open File." << endl;
    }
    else
    {
        cout << "File Opened Successfully." << endl;
        file.close();
    }

    cout << "----------------------------------------" << endl;

    cout << "\nProgram Executed Successfully" << endl;

    cout << "----------------------------------------" << endl;

    return 0;
}


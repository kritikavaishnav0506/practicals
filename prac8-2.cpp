#include <iostream>
#include <string>
using namespace std;

// Global variable
int globalVar = 100;

// PART A: FUNCTION DESIGN

// 1. Function without parameters and without return value
void displayMessage()
{
    cout << "\n1. Function without parameters and without return value";
    cout << "\nWelcome to Function Design Analyzer!" << endl;
}

// 2. Function without parameters and with return value
int getNumber()
{
    return 50;
}

// 3. Function with parameters and without return value
void addNumbers(int a, int b)
{
    cout << "\n3. Function with parameters and without return value";
    cout << "\nAddition = " << a + b << endl;
}

// 4. Function with parameters and with return value
int multiplyNumbers(int a, int b)
{
    return a * b;
}


// PART B: PARAMETER PASSING

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}


// PART C: SCOPE AND VISIBILITY

void scopeDemo()
{
    int localVar = 50;

    cout << "\nInside User Defined Function:";
    cout << "\nLocal Variable = " << localVar;
    cout << "\nGlobal Variable = " << globalVar << endl;
}


// PART D: FUNCTION OVERLOADING

// Display student details
void displayStudentDetails(string name)
{
    cout << "\nStudent Name: " << name << endl;
}

// Display student details with academic information
void displayStudentDetails(string name, int rollNo, float marks)
{
    cout << "\nStudent Name: " << name;
    cout << "\nRoll Number: " << rollNo;
    cout << "\nMarks: " << marks << endl;
}

// Display student details with academic and contact information
void displayStudentDetails(string name, int rollNo,
                           float marks, string contact)
{
    cout << "\nStudent Name: " << name;
    cout << "\nRoll Number: " << rollNo;
    cout << "\nMarks: " << marks;
    cout << "\nContact Details: " << contact << endl;
}


// MAIN FUNCTION

int main()
{
    cout << "====================================";
    cout << "\n FUNCTION DESIGN AND PARAMETER PASSING ANALYZER";
    cout << "\n====================================\n";

    // PART A
    cout << "\n========== PART A: FUNCTION DESIGN ==========";

    displayMessage();

    cout << "\n2. Function without parameters and with return value";
    cout << "\nReturned Number = " << getNumber() << endl;

    addNumbers(10, 20);

    cout << "\n4. Function with parameters and with return value";
    cout << "\nMultiplication = " << multiplyNumbers(5, 4) << endl;


    // PART B
    cout << "\n========== PART B: PARAMETER PASSING ==========";

    int num1 = 20;

    cout << "\nOriginal value = " << num1 << endl;

    callByValue(num1);

    cout << "After Call by Value = " << num1 << endl;

    int num2 = 20;

    cout << "\nOriginal value = " << num2 << endl;

    callByReference(num2);

    cout << "After Call by Reference = " << num2 << endl;


    // PART C
    cout << "\n========== PART C: SCOPE AND VISIBILITY ==========";

    int localMain = 200;

    cout << "\nInside Main Function:";
    cout << "\nLocal Variable = " << localMain;
    cout << "\nGlobal Variable = " << globalVar << endl;

    scopeDemo();


    // PART D
    cout << "\n========== PART D: FUNCTION OVERLOADING ==========";

    displayStudentDetails("Akshar");

    displayStudentDetails("Akshar", 101, 85.5);

    displayStudentDetails("Akshar", 101, 85.5, "9876543210");


    cout << "\n====================================";
    cout << "\n PROGRAM EXECUTED SUCCESSFULLY";
    cout << "\n====================================";

    return 0;
}

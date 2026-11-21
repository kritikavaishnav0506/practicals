#include <iostream>
using namespace std;

// Part A: Factorial using Iterative Approach
unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// Part A: Factorial using Recursive Approach
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

// Part B: Fibonacci using Iterative Approach
void fibonacciIterative(int n) {
    int a = 0, b = 1, c;

    cout << "Fibonacci Series (Iterative): ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
}

// Part B: Fibonacci using Recursive Approach
int fibonacciRecursive(int n, int &calls) {
    calls++;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacciRecursive(n - 1, calls) +
           fibonacciRecursive(n - 2, calls);
}

void generateRecursiveFibonacci(int n) {
    int calls = 0;

    cout << "Fibonacci Series (Recursive): ";

    for (int i = 0; i < n; i++) {
        cout << fibonacciRecursive(i, calls) << " ";
    }

    cout << endl;
    cout << "Recursive Fibonacci Function Calls: "
         << calls << endl;
}

// Main Function
int main() {
    int choice, n;

    do {
        cout << "\n====================================";
        cout << "\n RECURSIVE MATHEMATICAL OPERATIONS";
        cout << "\n====================================";
        cout << "\n1. Factorial";
        cout << "\n2. Fibonacci Series";
        cout << "\n3. Comparison";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter a number (0-20): ";
            cin >> n;

            if (n < 0 || n > 20) {
                cout << "Invalid input! Enter 0 to 20.\n";
                break;
            }

            cout << "\nFactorial using Iterative Approach: "
                 << factorialIterative(n);

            cout << "\nFactorial using Recursive Approach: "
                 << factorialRecursive(n);

            cout << endl;
            break;

        case 2:
            cout << "\nEnter number of terms (1-30): ";
            cin >> n;

            if (n < 1 || n > 30) {
                cout << "Invalid input! Enter 1 to 30.\n";
                break;
            }

            fibonacciIterative(n);
            generateRecursiveFibonacci(n);
            break;

        case 3:
            cout << "\n========== COMPARISON ==========\n";

            cout << "\n1. Number of Function Calls:";
            cout << "\n   Iterative: Fewer function calls";
            cout << "\n   Recursive: Multiple function calls";

            cout << "\n\n2. Program Readability:";
            cout << "\n   Iterative: Uses loops";
            cout << "\n   Recursive: Uses self-calling functions";

            cout << "\n\n3. Code Complexity:";
            cout << "\n   Factorial Iterative: O(n)";
            cout << "\n   Factorial Recursive: O(n)";
            cout << "\n   Fibonacci Iterative: O(n)";
            cout << "\n   Fibonacci Recursive: O(2^n)";

            cout << "\n\n4. Execution Flow:";
            cout << "\n   Iterative: Repeats using loops";
            cout << "\n   Recursive: Calls itself until base case";

            cout << "\n\n================================\n";
            break;

        case 4:
            cout << "\nProgram terminated successfully.\n";
            break;

        default:
            cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}

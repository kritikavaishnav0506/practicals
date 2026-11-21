#include <iostream>
using namespace std;

// Part A: Display numbers from 1 to N
void printAscending(int n)
{
    if (n == 0)
        return;

    printAscending(n - 1);
    cout << n << " ";
}

// Part A: Display numbers from N to 1
void printDescending(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    printDescending(n - 1);
}

// Part B: Reverse a number using recursion
long long reverseNumber(long long n, long long rev = 0)
{
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

// Part B: Calculate sum of digits
int sumDigits(long long n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

// Part C: Convert decimal to binary using recursion
void decimalToBinary(long long n)
{
    if (n == 0)
        return;

    decimalToBinary(n / 2);
    cout << n % 2;
}

int main()
{
    int choice, n;
    long long num;

    do
    {
        cout << "\n===== RECURSIVE UTILITY ANALYZER =====\n";
        cout << "1. Display numbers from 1 to N\n";
        cout << "2. Display numbers from N to 1\n";
        cout << "3. Reverse a number\n";
        cout << "4. Sum of digits\n";
        cout << "5. Decimal to Binary conversion\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter a positive integer: ";
                cin >> n;

                if (n <= 0)
                {
                    cout << "Please enter a positive number.\n";
                    break;
                }

                cout << "Numbers from 1 to " << n << ": ";
                printAscending(n);
                cout << endl;
                break;

            case 2:
                cout << "Enter a positive integer: ";
                cin >> n;

                if (n <= 0)
                {
                    cout << "Please enter a positive number.\n";
                    break;
                }

                cout << "Numbers from " << n << " to 1: ";
                printDescending(n);
                cout << endl;
                break;

            case 3:
                cout << "Enter a positive number: ";
                cin >> num;

                if (num <= 0)
                {
                    cout << "Please enter a positive number.\n";
                    break;
                }

                cout << "Reversed number: "
                     << reverseNumber(num) << endl;
                break;

            case 4:
                cout << "Enter a positive number: ";
                cin >> num;

                if (num <= 0)
                {
                    cout << "Please enter a positive number.\n";
                    break;
                }

                cout << "Sum of digits: "
                     << sumDigits(num) << endl;
                break;

            case 5:
                cout << "Enter a decimal number: ";
                cin >> num;

                if (num < 0)
                {
                    cout << "Please enter a non-negative number.\n";
                    break;
                }

                cout << "Binary representation: ";

                if (num == 0)
                    cout << "0";
                else
                    decimalToBinary(num);

                cout << endl;
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}

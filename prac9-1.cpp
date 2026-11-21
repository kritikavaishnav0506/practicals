#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Part A - Address and Value

    int num = 25;
    char ch = 'A';
    float decimal = 85.60;

    cout << "********************************************" << endl;
    cout << "          MEMORY ADDRESS EXPLORER" << endl;
    cout << "********************************************" << endl;

    cout << "\n----------- Variable Information -----------" << endl;

    cout << "\nInteger Value     : " << num << endl;
    cout << "Memory Address    : " << &num << endl;

    cout << "\n---------------------------------------------" << endl;

    cout << "\nCharacter Value   : " << ch << endl;
    cout << "Memory Address    : " << static_cast<void*>(&ch) << endl;

    cout << "\n---------------------------------------------" << endl;

    cout << "\nFloating Value    : " << fixed << setprecision(2) << decimal << endl;
    cout << "Memory Address    : " << &decimal << endl;

    cout << "\n---------------------------------------------" << endl;

    // Part B - Indirect Referencing

    int *ptr = &num;

    cout << "\nIndirect Referencing" << endl;
    cout << "\nStored Value      : " << *ptr << endl;

    // Modify value using pointer
    *ptr = 30;

    cout << "\nModified Value    : " << num << endl;

    cout << "\n---------------------------------------------" << endl;

    // Part C - Sequential Data Collections

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "\nSequential Data Collection" << endl;

    // Array using index
    cout << "\nArray using Index" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Array using address-based access
    cout << "\n\nArray using Address-based Access" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }

    cout << "\n\n---------------------------------------------" << endl;

    cout << "\nObservation" << endl;
    cout << "Both approaches access the same memory locations." << endl;

    cout << "\n********************************************" << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function for Stack and Heap Memory
void memoryAnalyzer()
{
    // Part A: Stack Memory
    int localVar = 100;

    cout << "\n------------ Stack Memory ------------" << endl;

    cout << "Local Variable Value: " << localVar << endl;
    cout << "Memory Address: " << (void*)&localVar << endl;

    // Part A: Dynamically Allocated Memory
    int* dynamicPtr = new int(250);

    cout << "\n------ Dynamically Allocated Memory ------" << endl;

    cout << "Allocated Value: " << *dynamicPtr << endl;
    cout << "Memory Address: " << (void*)dynamicPtr << endl;

    cout << "\n------------------------------------------" << endl;

    // Release dynamically allocated memory
    delete dynamicPtr;
    dynamicPtr = nullptr;
}

int main()
{
    cout << "******************************************" << endl;
    cout << "       MEMORY ORGANIZATION ANALYZER       " << endl;
    cout << "******************************************" << endl;

    // Part A: Stack and Heap Memory
    memoryAnalyzer();

    // Part B: Multi-level Referencing
    cout << "\n---------- Multi-level Referencing ----------" << endl;

    int original = 50;

    // Single-level pointer
    int* single = &original;

    // Double-level pointer
    int** doublePtr = &single;

    // Triple-level pointer
    int*** triplePtr = &doublePtr;

    cout << "Original Value: " << original << endl;

    cout << "\nSingle-level Address: "
         << (void*)&single << endl;

    cout << "Double-level Address: "
         << (void*)&doublePtr << endl;

    cout << "Triple-level Address: "
         << (void*)&triplePtr << endl;

    cout << "\nValue Accessed through Three Levels: "
         << ***triplePtr << endl;

    cout << "\n------------------------------------------" << endl;

    // Part C: Memory Safety
    cout << "\n------------- Memory Safety -------------" << endl;

    // 1. Null Reference
    int* nullPtr = nullptr;

    cout << "\nNull Reference:" << endl;

    if (nullPtr == nullptr)
    {
        cout << "Safe (Reference is NULL)" << endl;
    }
    else
    {
        cout << "Reference is Valid" << endl;
    }

    cout << "\n------------------------------------------" << endl;

    // 2. Invalid Reference
    cout << "\nInvalid Reference:" << endl;

    int* invalidPtr = new int(100);

    delete invalidPtr;

    cout << "Memory Released Successfully" << endl;

    // Do not dereference invalidPtr after delete
    cout << "Reference Invalid (Memory Released)" << endl;

    cout << "\n------------------------------------------" << endl;

    // 3. Uninitialized Address Variable
    cout << "\nUninitialized Address Variable:" << endl;

    int* uninitializedPtr;

    // Never access or dereference an uninitialized pointer
    cout << "Unsafe to Access" << endl;

    cout << "\n------------------------------------------" << endl;



    return 0;
}

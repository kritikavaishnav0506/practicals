#include <iostream>
#include <cstring>
using namespace std;

// Part A: Structure for Product Information
struct Product
{
    int productId;
    char productName[16];
    float price;
};

// Part B: Structures with different member orders

// Structure A - Different data member order
struct TypeA
{
    char ch;
    double d;
    int num;
    char c;
};

// Structure B - Optimized data member order
struct TypeB
{
    double d;
    int num;
    char ch;
    char c;
};

// Part C: Union for Shared Memory
union SharedData
{
    int i;
    float f;
    char ch;
};

int main()
{
    cout << "********************************************" << endl;
    cout << "    COMPOSITE DATA REPRESENTATION ANALYZER" << endl;
    cout << "********************************************" << endl;

    // Part A
    Product p;

    cout << "\nComposite Data Type A (Structure)" << endl;

    cout << "Size of Product ID : "
         << sizeof(p.productId) << " Bytes" << endl;

    cout << "Size of Product Name : "
         << sizeof(p.productName) << " Bytes" << endl;

    cout << "Size of Price : "
         << sizeof(p.price) << " Bytes" << endl;

    cout << "Total Size : "
         << sizeof(Product) << " Bytes" << endl;

    cout << "\n--------------------------------------------" << endl;

    // Part B
    TypeA a;
    TypeB b;

    cout << "\nComposite Data Type B (Padding and Alignment)" << endl;

    cout << "Size of Structure A : "
         << sizeof(a) << " Bytes" << endl;

    cout << "Size of Structure B : "
         << sizeof(b) << " Bytes" << endl;

    cout << "\nPadding and Alignment Observed" << endl;

    if (sizeof(a) > sizeof(b))
    {
        cout << "Structure B uses less memory." << endl;
        cout << "Rearranging members reduces padding." << endl;
    }
    else
    {
        cout << "Both structures use equal memory." << endl;
    }

    cout << "\n--------------------------------------------" << endl;

    // Part C
    SharedData data;

    cout << "\nShared Memory Representation (Union)" << endl;

    data.i = 120;
    cout << "Integer Value : " << data.i << endl;

    data.f = 120.00;
    cout << "Floating Value : " << data.f << endl;

    data.ch = 'x';
    cout << "Character Value : " << data.ch << endl;

    cout << "\nAfter Updating Union Members:" << endl;
    cout << "Previous Integer Value is Overwritten." << endl;
    cout << "Previous Floating Value is Overwritten." << endl;

    cout << "Size of Union : "
         << sizeof(SharedData) << " Bytes" << endl;

    cout << "\n--------------------------------------------" << endl;

    // Part D
    cout << "\nTrade-off Analysis" << endl;

    cout << "\nStructure" << endl;
    cout << "Separate Memory for Every Member" << endl;
    cout << "Suitable for Storing Complete Records" << endl;
    cout << "All Members Can Store Values Simultaneously" << endl;

    cout << "\nUnion" << endl;
    cout << "Shared Memory for All Members" << endl;
    cout << "Suitable for Memory-Efficient Applications" << endl;
    cout << "Only One Member Holds a Valid Value at a Time" << endl;

    cout << "\n********************************************" << endl;
    cout << "       Program Executed Successfully" << endl;
    cout << "********************************************" << endl;

    return 0;
}

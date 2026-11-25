#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    string e,n,b;
    short int s;
    long int m;

    cout << "Enter Enrollment Number : ";
    cin >> e;
    cout << "Enter Student Name : ";
    cin.ignore();
    getline(cin,n);
    cout << "Enter Branch : ";
    getline(cin,b);
    cout << "Enter Semester : ";
    cin >> s;
    cout << "Enter Mobile Number : ";
    cin >> m;


    cout << "*****************************************\n";
    cout << "\tStudent Information\n";
    cout << "*****************************************\n";
    cout << left<<setw(17)<<"Enrollment Number"<<":"<<e<<"\n";
    cout << left<<setw(17)<<"Student Name"<<":"<<n<<"\n";
    cout << left<<setw(17)<<"Branch"<<":"<< b<<"\n";
    cout << left<<setw(17)<<"Semester"<<":"<<s<<"\n";
    cout << left<<setw(17)<<"Mobile Number"<< ":"<<m<<"\n";
    return 0;

}


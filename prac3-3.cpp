#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
    string e,n,b;
    short int s;
    long long int p;
    int m1,m2,m3,total;
    float per,avg;

    cout << "Enter Enrollment Number :";
    cin >> e;
    cout << "Enter Student Name :";
    cin.ignore();
    getline(cin,n);
    cout << "Enter Branch :";
    getline(cin,b);
    cout << "Enter Semester :";
    cin >> s;
    cout << "Enter Mobile Number :";
    cin >> p;


    cout << "*****************************************\n";
    cout << "\tAcademic Information\n";
    cout << "*****************************************\n";

    cout << "Enter Maths Marks :";
    cin >> m1;
    cout << "Enter Physics Marks :";
    cin >> m2;
    cout << "Enter Programming Foundation Marks :";
    cin >> m3;

    total = (m1+m2+m3);
    avg = (m1+m2+m3)/3.0;
    per = (m1+m2+m3)/3.0;

    cout << "*****************************************\n";
    cout << "\tAcademic Summary\n";
    cout << "*****************************************\n";

    cout << left << setw(15)<<"Total Marks : "<<total <<"\n";
    cout << left << setw(15)<<"Avg Marks : "<<avg <<"\n";
    cout << left << setw(15)<<"percentage : "<<per <<"%"<<"\n";

    cout << "*****************************************\n";
    cout << "\tStudent Information\n";
    cout << "*****************************************\n";
    cout << left<<setw(20)<<"Enrollment Number" <<":"<<e << "\n";
    cout << left<<setw(20)<<"Student Name" <<":"<<n << "\n";
    cout << left<<setw(20)<<"Branch" << ":"<<b << "\n";
    cout << left<<setw(20)<<"Semester"<< ":"<<s << "\n";
    cout << left<<setw(20)<<"Mobile Number" <<":"<< p;
    return 0;

}


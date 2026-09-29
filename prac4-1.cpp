#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m1,m2,m3,Total;
    float Average,Percentage;
    cout<<"*******************************************************"<<endl;
    cout<<setw(40)<<"STUDENT RECORD MANEGEMENT SYSTEM"<<endl;
    cout<<"*******************************************************"<<endl<<endl<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<left<<setw(30)<<"Academic Summary"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"marks of subject 1"<<": ";
    cin>>m1;
    cout<<"marks of subject 2"<<": ";
    cin>>m2;
    cout<<"marks of subject 3"<<": ";
    cin>>m3;
    if(m1<0||m1>100 || m2<0 ||m2>100 || m3<0||m3>100)
    {
        cout<<"Error : invalid input";
    }
    else
    {
    Total=m1 + m2 + m3;
    Average=Total/3.0;
    Percentage=Total/3.0;


    cout<<"Total Marks = "<<Total<<endl;
    cout<<"Average = "<<Average<<endl;
    cout<<"Percentage = "<<Percentage<<"%"<<endl;


     cout<<"------------------------------------------------"<<endl;
    cout<<left<<setw(30)<<"Academic Result"<<endl;
    cout<<"------------------------------------------------"<<endl;
    if(Percentage>=35)
    {
        cout<<"Result : PASS "<<endl<<endl;
        cout<<"Congratulations! you have successfully passed"<<endl<<endl;
    }
    else
        {
            cout<<"Result : FAIL"<<endl<<endl;

    }

    }
    cout<<"-----------------------------------------------------------"<<endl;

}


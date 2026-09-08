#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int E,S;
    long long int M;
    string N,B;
    char choice;
    cout<<"*************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"*************************************************"<<endl<<endl;


    cout<<"Student Registration"<<endl<<endl;

    do
        {
            cout<<left<<setw(30)<<"Enrollment number"<<" :";
                cin>>E;
                cout<<endl<<left<<setw(30)<<"Student Name"<<" :";
                cin.ignore();
                getline(cin,N);

    cout<<endl<<left<<setw(30)<<"Branch"<<" :";
    cin>>B;
    cout<<endl<<left<<setw(30)<<"Semester"<<" :";
    cin>>S;
    cout<<endl<<left<<setw(30)<<"Mobile Number"<<" :";
    cin>>M;
    cout<<"Student Registered Successfully."<<endl;
    cout<<endl;
    cout<<"Register Another Student?(Y/N)"<<" :";
    cin>>choice;
     if(choice=='Y')
     {
        cout<<"----------------------------------------------"<<endl;
     }

    }while(choice=='Y');
    cout<<endl;
    cout<<"Returning to Main Menu"<<endl;

    return 0;

}

#include<iostream>
#include<iomanip>
using namespace std;
int main()


 {    string grade,remark;
     int s1,s2,s3,s4,s5,T,S;
     float PER,avg;



    cout<<"******************************************************"<<endl;
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM     "<<endl;
    cout<<"******************************************************"<<endl<<endl<<endl;

    cout<<"Enter number of subject of "<<" :";
    cin>>S;
    cout<<endl<<endl;

    cout<<"Enter marks of subject 1"<<" :";
    cin>>s1;
    cout<<"Enter marks of subject 2"<<" :";
    cin>>s2;
    cout<<"Enter marks of subject 3"<<" :";
    cin>>s3;
    cout<<"Enter marks of subject 4"<<" :";
    cin>>s4;
    cout<<"Enter marks of subject 5"<<" :";
    cin>>s5;
    cout<<endl<<endl;


    cout<<"--------------------------------------------------"<<endl;
    cout<<left<<"Academic Result"<<endl;
    cout<<"--------------------------------------------------"<<endl;

            T=s1+s2+s3+s4+s5;
            avg=(T)/5.0;
            PER=(T)/5.0;


             cout<<left<<setw(20)<<"Total marks"<<": "<<T<<endl;
             cout<<left<<setw(20)<<"Average"<<": "<<avg<<endl;
             cout<<left<<setw(20)<<"Percentage"<<": "<<PER<<endl<<endl;


            if(PER>=40.0)
             {
                 cout<<left<<setw(20)<<"Result"<<" :"<<"PASS" <<endl;
             }
             else
             {
                 cout<<left<<setw(20)<<"Result"<<" :"<<"FAIL" <<endl;
             }



             if(PER >=90 && PER<=100)
             {
                 cout<<left<<setw(20)<<"grade"<<" :"<<"o"<<endl;
                cout<<left<<setw(20)<<"remark"<<" :"<<"outstanding"<<endl;
             }
             else if(PER >=80 && PER <90)
             {
                 cout<<left<<setw(20)<<"grade"<<" :" <<"A+"<<endl;
                 cout<<left<<setw(20)<<"remark"<<" :"<<"Excellent"<<endl;
             }
             else if (PER >=70 && PER <80)
             {
                 cout<<left<<setw(20)<<"grade"<<" :"<<"A"<<endl;
                 cout<<left<<setw(20)<<"remark"<<" :"<<"Very Good"<<endl;
             }
             else if (PER >=60 && PER<70)
             {
                 cout<<left<<setw(20)<<"grade"<<" :"<<"B+"<<endl;
                cout<<left<<setw(20)<<"remark"<<" :"<<"Excellent"<<endl;
             }
             else if (PER >=50 && PER <60)
             {
                 cout<<left<<setw(20)<<"grade"<<" :"<<"B"<<endl;
                 cout<<left<<setw(20)<<"remark"<<" :"<<"Satisfactory"<<endl;
             }
             else if (PER >=40 && PER <50)
             {
                cout<<left<<setw(20)<<"grade"<<" :"<<"C"<<endl;
                 cout<<left<<setw(20)<<"remark"<<" :"<<"needs improvement"<<endl;
             }
             else
             {
                 cout<<left<<setw(20)<<"grade"<<" :"<<"F"<<endl;
                 cout<<left<<setw(20)<<"remark" <<" :"<<"FAILED"<<endl<<endl;
             }
            cout<<"----------------------------------------------------------------"<<endl;

        return 0;
 }

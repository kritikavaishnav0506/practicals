
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m1,m2,m3,Total;
    float Average,percentage;
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
    percentage=Total/3.0;


    cout<<"Total Marks = "<<Total<<endl;
    cout<<"Average = "<<Average<<endl;
    cout<<"Percentage = "<<percentage<<"%"<<endl;


     cout<<"------------------------------------------------"<<endl;
    cout<<left<<setw(30)<<"Academic Result"<<endl;
    cout<<"------------------------------------------------"<<endl;
     if(percentage<100 && percentage>=90)
                {
                    cout<<"\ngrade= o"<<endl;
                    cout<<"\nperformance= outstanding"<<endl;
                }
                  if(percentage>=80 && percentage <90)
                {
                    cout<<"\ngrade= A+"<<endl;
                    cout<<"\nperformance= exellent"<<endl;
                }
                  if(percentage>=75 && percentage<80)
                {
                    cout<<"\ngrade= A"<<endl;
                    cout<<"\nperformance= very good"<<endl;
                }
                  if(percentage>=65 && percentage<75)
                {
                    cout<<"\ngrade= B+"<<endl;
                    cout<<"\nperformance= good"<<endl;
                }
                  if(percentage>55 && percentage<65)
                {
                    cout<<"\ngrade= B"<<endl;
                    cout<<"\nperformance= nice"<<endl;
                }
                 if(percentage>=45 && percentage<55)
                {
                    cout<<"\ngrade= c"<<endl;
                    cout<<"\nperformance= not good"<<endl;
                }
                 if(percentage>=35 && percentage<45)
                {
                    cout<<"\ngrade= D"<<endl;
                    cout<<"\nperformance= bad"<<endl;
                }
                if(percentage<35)
                {
                    cout<<"\n grade= F"<<endl;
                    cout<<"\nperformance= fail"<<endl;
                }
                cout<<"----------------------------------------------------"<<endl;
                return 0;
    }


}

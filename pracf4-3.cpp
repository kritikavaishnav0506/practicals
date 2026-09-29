#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int roll,sem,math,phy,cpf,T,input;
    string N,M,B,grade;
    float A,P;

    cout<<"***************************************************************"<<endl;
    cout<<"             STUDENT RECORD MANAGEMENT SYSTEM                  "<<endl;
    cout<<"***************************************************************"<<endl;

    cout<<"-------------------Main Menu-----------------------------------"<<endl;



    do
    {
        cout<<"1.Register New Student"<<endl;
        cout<<"2.Display student record"<<endl;
        cout<<"3.Enter students marks"<<endl;
        cout<<"4.Display academic result"<<endl;
        cout<<"5.Exit"<<endl;

        cout<<"Enter your choice"<<" :";

        cin>>input;

        switch(input)
        {
        case 1:
            cout<<"---------------------------------------------"<<endl;
            cout<<"        Student Registration                 "<<endl;
            cout<<"---------------------------------------------"<<endl;
            cout<<"Enter Enrollment Number"<<" :";
            cin>>roll;
            cout<<endl;
            cout<<"Enter student name"<<" :";
            cin>>N;
            cout<<endl;
            cout<<"Enter Branch"<<" :";
            cin>>B;
            cout<<endl
            ;cout<<"Enter semester"<<" :";
            cin>>sem;
            cout<<endl;
            cout<<"Enter Mobile Number"<<" :";
            cin>>M;
            cout<<endl;
            cout<<"Student Registered Successfully.";
            break;
        case 2:
            cout<<"---------------------------------------------"<<endl;
            cout<<"        Student Record                 "<<endl;
            cout<<"---------------------------------------------"<<endl;

            cout<<"Enrollment Number"<<" :";
            cin>>roll;
            cout<<endl;
            cout<<"Student Name"<<" :";
            cin>>N;
            cout<<endl;
            cout<<"Branch"<<" :";
            cin>>B;
            cout<<endl
            ;cout<<"Semester"<<" :";
            cin>>sem;
            cout<<endl;
            cout<<"Mobile Number"<<" :";
            cin>>M;
            cout<<endl;
            break;

        case 3:
            cout<<"---------------------------------------------"<<endl;
            cout<<"        Student Marks                "<<endl;
            cout<<"---------------------------------------------"<<endl;


            cout<<"Mathematics marks"<<" :";
            cin>>math;
            cout<<endl;
            cout<<"Physics marks"<<" :";
            cin>>phy;
            cout<<endl;
            cout<<"Computer programming fondation marks"<<" :";
            cin>>cpf;
            cout<<endl;
            cout<<"Marks entered successfully.";
            break;

        case 4:
             cout<<"---------------------------------------------"<<endl;
            cout<<"        Academis Summary               "<<endl;
            cout<<"---------------------------------------------"<<endl;
            T=math+phy+cpf;
            A=T/3.0;
            P=A;
            cout<<"\nTotal marks"<<" :"<<T;
            cout<<"\nAverage marks"<<" :"<<A;
            cout<<"\nPercentage"<<" :"<<P;
            if(math<35 || phy<35 || cpf<35)
            {
                cout<<"result : Fail"<<endl;
            }

            else
            {
                cout<<"\nTotal marks"<<" :" <<T<<endl;
                cout<<"\npercentage"<<" :" <<P<<endl;
                cout<<"result : Pass"<<endl;
                cout<<"congratulations,you are passed";
                if(P<100 && P>=90)
                {
                    cout<<"\ngrade= o"<<endl;
                    cout<<"\nperformance= outstanding"<<endl;
                }
                 else if(P>=80 && P<90)
                {
                    cout<<"\ngrade= A+"<<endl;
                    cout<<"\nperformance= exellent"<<endl;
                }
                 if(P>=75 && P<80)
                {
                    cout<<"\ngrade= A"<<endl;
                    cout<<"\nperformance= very good"<<endl;
                }
                 if(P>=65 && P<75)
                {
                    cout<<"\ngrade= B+"<<endl;
                    cout<<"\nperformance= good"<<endl;
                }
                 if(P>55 && P<65)
                {
                    cout<<"\ngrade= B"<<endl;
                    cout<<"\nperformance= nice"<<endl;
                }
                 if(P>=45 && P<55)
                {
                    cout<<"\ngrade= c"<<endl;
                    cout<<"\nperformance= not good"<<endl;
                }
                 if(P>=35 && P<45)
                {
                    cout<<"\ngrade= D"<<endl;
                    cout<<"\nperformance= bad"<<endl;
                }
                else
                {
                    cout<<"\n grade= F"<<endl;
                    cout<<"\nperformance= fail"<<endl;
                }
                break;
        case 5:
            cout<<"Exiting the program";
            break;
        default:
            cout<<"invalid choice";
            break;


            }

        }
    }while(input==4);
    return 0;
}


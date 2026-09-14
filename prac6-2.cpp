
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;

    cout<<"***********************************************\n";
    cout<<"      SPORTS EVENT SCORE ANALYSIS              \n";
    cout<<"***********************************************\n";

    cout<<"Enter number of participants"<<" :";
    cin>>n;

    string id[n];
    string name[n];
    int score[n];

    for(int i=0; i<n; i++)
    {
        cout<<"\n\nEnter student id"<<" :";
        cin>>id[i];

        cout<<"Enter student name"<<" :";
        cin>>name[i];

        cout<<"Enter student score"<<" :";
        cin>>score[i];
    }

    cout<<"\n-------------------------------------------------\n";
    cout<<"         Participant Performance                     ";
    cout<<"\n-------------------------------------------------\n";


    cout<<left<<setw(10)<<"Id"<<setw(15)<<"Name"<<setw(10)<<"Score"<<endl;

    cout<<"--------------------------------------------------\n";

    for(int i=0; i<n; i++)
    {
      cout<<left<<setw(10)<<id[i]<<setw(15)<<name[i]<<setw(10)<<score[i]<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;


    int total=0;
    int highest=score[0];
    int lowest=score[0];

    total += score[0];

    for(int i=0; i<n; i++)
    {
        if(score[i] > highest)
        {
            highest = score[i];
        }
        if(score[i] > lowest)
        {
            lowest = score[i];
        }
    }

    double average=(double)total/n;

    cout<<"Total score: "<<total <<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Average score: "<<average <<endl;
    cout<<"Highest score: "<<highest <<endl;
    cout<<"Lowest score: "<<lowest <<endl;

    string si;
    cout<<"Search participant Id"<<endl;
    cout<<"Enter student id :";
    cin>>si;

    for(int i=0; i<n; i++)
    {
        if(id[i]==si)
        {
            cout<<"Id:"<<id[i]<<endl;
            cout<<"Name:"<<name[i]<<endl;
            cout<<"Score:"<<score[i]<<endl;
        }
    }



    int i,j,temp1;
    string temp2,temp3;

    for(j=0; j<n-1; j++)
    {
        for(i=0; i<n-1-j;i++)
        {
            if(score[i]<score[i+1])
            {
                temp1=score[i];
                score[i]=score[i+1];
                score[i+1]=temp1;

                temp2=id[i];
                id[i]=id[i+1];
                id[i+1]=temp2;

                temp3=name[i];
                name[i]=name[i+1];
                name[i+1]=temp3;
            }
        }
    }






     cout<<"\n-----------------------------------------\n";
     cout<<"                Ranking List               \n";
     cout<<"\n-----------------------------------------\n";

     cout<<left<<setw(10)<<"Rank"<<setw(10)<<"Id"<<setw(15)<<"Name"<<setw(10)<<"Score"<<endl;


     cout<<"-----------------------------------------\n";

     for(int i=0;i<n;i++)
     {
        cout<<left<<setw(10)<<i+1<<setw(10)<<id[i]<<setw(15)<<name[i]<<setw(10)<<score[i]<<endl;
     }


     cout<<"----------------------------------------------\n";

     cout<<"Top three performance\n";
     for(int i=0; i<3; i++)
     {
         cout<<i+1<<"."<<name[i]<<"-"<<score[i]<<endl;
     }

     return 0;
}

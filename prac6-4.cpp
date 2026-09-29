#include<iostream>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],m3[3][3];
    int i,j,k;
    cout<<"****************************************************"<<endl;
    cout<<"             MATRIX MULTIPLICATION                  "<<endl;
    cout<<"****************************************************"<<endl;
    cout<<endl;

    cout<<"Enter Elements"<<" :";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m1[i][j];
        }
    }

    cout<<"Enter Elements"<<" :";
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            cin>>m2[j][k];
        }
    }
    cout<<endl;
    cout<<"First Matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m1[i][j];
        }
        cout<<endl;
    }
    cout<<
}

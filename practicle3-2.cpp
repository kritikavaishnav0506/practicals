#include<iostream>
using namespace std;
int main()
{
    int Cpfmarks;
    int Maths;
    Maths=80;
    Cpfmarks=70;
    cout<<"Marks before execution = 70"<<endl;
    cout<<"Marks before execution = "<<++Cpfmarks<<endl;
    cout<<"Marks before execution = 70"<<endl;
    cout<<"Marks before execution = "<<--Cpfmarks<<endl;
    cout<<"Marks before execution = 70"<<endl;
    cout<<"Marks before execution = "<<Cpfmarks++<<endl;
    cout<<"Marks before execution = 70"<<endl;
    cout<<"Marks before execution = "<<Cpfmarks--<<endl;
    cout<< "++Maths = "<<++Maths<<endl;
    cout<< "--Maths = "<<--Maths<<endl;
    cout<< "Maths++ = "<<Maths++<<endl;
    cout<< "Maths-- = "<<Maths--<<endl;
    cout<< "result = "<<++Cpfmarks + Cpfmarks++ + --Maths + ++Maths - Maths--<<endl;
    cout<<"Marks Before Evaluation of Cpfmarks = 70 "<<endl;
    cout<<"Marks Before Evaluation of Cpfmarks = 222 "<<endl;
    cout<<"Marks Before Evaluation of Cpfmarks = 80 "<<endl;
    cout<<"Marks Before Evaluation of Cpfmarks = 222 "<<endl;



}

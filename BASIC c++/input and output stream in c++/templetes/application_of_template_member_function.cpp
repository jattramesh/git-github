//
// Created by rahul on 17/8/19.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
template <class T>
void roots(T a, T b, T c)
{
    T d =b*b -4*a*c;
    if(d==0)
        cout<<"R1=R2"<<-b/(2*a)<<endl;
    else if(d>0)
    {
        cout<<"roots are real";
        float R=sqrt(d);
        float R1=(-b+R)/(2*a);
        float R2=(-b-R)/(2*a);
        cout<<"R1"<<"\t"<<R1<<endl;
        cout<<"R2"<<"\t"<<R2<<endl;
    }
    else
    {
        cout<<"Roots are imaginary";
        cout<<b<<endl;
        cout<<a<<endl;
        double  R1=-b/(2*a);
        cout<<R1<<endl;
        double R2=sqrt(-d)/(2*a);
        cout<<"Real part"<<R1<<endl;
        cout<<"imaginary part"<<fixed<<R2<<endl;
        cout<<endl;
    }
}
int main()
{
    cout<<"integer cofficient";
    roots(1,1,1);
    cout<<"integer cofficient";
    roots(1.5,3.6,0.0);
    return 0;
}
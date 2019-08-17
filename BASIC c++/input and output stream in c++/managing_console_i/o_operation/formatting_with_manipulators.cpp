//
// Created by rahul on 9/8/19.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout.setf(ios::showpos);
    cout<<setw(5)<<"n"<<setw(15)<<"inverse of n"<<setw(15)<<"sum of terms "<<endl;
    double term,sum=0;
    for(int i=1;i<=10;i++)
    {
        term=1.0/float(i);
        sum=sum+term;
        cout<<setw(5)<<i;
        cout<<setw(14)<<setprecision(4)<<setiosflags(ios::scientific)<<term<<setw(13)<<resetiosflags(ios::scientific)<<sum<<endl;
    }
    return 0;
}

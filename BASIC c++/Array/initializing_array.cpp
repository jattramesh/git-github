//
// Created by Rahul on 6/13/2019.
//


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace  std;
#define COUNT 20
long fib[COUNT+1]={0,1};
string header="index fibonacci quotient  Deviation\n of limit \n------------";
int main()
{
    int i;
    double q,lim;
    for(i=1;i<COUNT;++i)
        fib[i+1]=fib[i]+fib[i-1]; //fibo number
lim=(1.0+sqrt(5.0))/2.0;
//title and headerfor first two fibo number
cout<<header<<endl;
cout<<setw(5)<<0<<setw(15)<<fib[0]<<endl;
cout<<setw(5)<<1<<setw(15)<<fib[1]<<endl;
//rest of fibo series
for(i=2;i<COUNT;i++) {
    q = (double) fib[i] / (double) fib[i - 1];
    cout << setw(5) << i << setw(15) << fib[i] << setw(20) << fixed << setprecision(10) << q << setw(20)
         << setprecision(3) << lim - q << endl;
}
return 0;
}

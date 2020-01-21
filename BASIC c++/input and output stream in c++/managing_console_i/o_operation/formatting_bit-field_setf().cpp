//
// Created by rahul on 9/8/19.
//
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.precision(3);
    cout.fill('*');
    cout.setf(ios::scientific,ios::floatfield);
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(15);
    cout<<275.1<<endl;
cout.fill('X');
cout.precision(5);
cout.setf(ios::internal,ios::adjustfield);
cout.setf(ios::scientific,ios::floatfield);
cout.width(15);
cout<<-12.3456<<endl;
cout.setf(ios::showpos);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(3);
cout.width(10);
cout.fill('L');
cout.setf(ios::internal,ios::adjustfield);
cout<<275.5<<endl;
cout.fill('*');
cout.setf(ios::left,ios::adjustfield);
cout.width(10);
cout<<"VALUE";
cout.setf(ios::right,ios::adjustfield);
cout.width(15);
cout<<"sqrt of values "<<endl;
cout.fill('.');
cout.precision(4);
cout.setf(ios::showpoint);
cout.setf(ios::showpos);
cout.setf(ios::fixed,ios::floatfield);
for(int i=1;i<=10;i++)
{
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(5);
    cout<<i;
    cout.setf(ios::right,ios::adjustfield);
    cout.width(20);
    cout<<sqrt(i)<<endl;
}
//float field change
cout.unsetf(ios::showpos);
cout.setf(ios::scientific,ios::floatfield);
cout<<"\n sqrt(100"<<sqrt(100)<<"\n";
cout<<"hey"<<5;

return 0;}
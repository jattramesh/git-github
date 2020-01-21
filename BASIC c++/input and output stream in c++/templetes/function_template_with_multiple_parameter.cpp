//
// Created by rahul on 17/8/19.
//
#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
void display(T1 x,T2 y)
{
    cout<<x<<"  "<<y<<'\n';
}
int main()
{
    display(1999,"EBG");
    display(12.34,1234);
    return 0;
}
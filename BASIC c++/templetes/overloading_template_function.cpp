//
// Created by rahul on 17/8/19.
//
#include <iostream>
#include <string>
using namespace std;
template <class T>
void display(T x)
{
    cout<<"template display" << x<< '\n';
}
void display(int x)
{
    cout<<"explicit display"<<x<<'\n';
}
void ccode(char ch)
{
    int code;
    code=ch;
    cout<<code<<endl;
}
int main()
{
    display(100);
    display(12.34);
    display('c');
    ccode('A');
}

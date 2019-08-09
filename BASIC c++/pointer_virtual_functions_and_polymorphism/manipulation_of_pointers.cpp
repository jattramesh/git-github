//
// Created by rahul on 6/8/19.
//
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<"the value of a is "<<a;
    *ptr=(*ptr)/2;
    cout<<"the value of a is "<<(*ptr);
    cout<<"\n\n";
}
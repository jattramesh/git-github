//
// Created by rahul on 6/8/19.
//
#include <iostream>
using namespace std;
int main()
{
    int a,*ptr1,**ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout<<"the address of  a :"<<ptr1<<endl;
    cout<<"address of ptr1"<<ptr2<<endl;
    cout<<"after incrementing the address values\n\n";
  cout<<"address of a :";
    ptr1+=2;
    cout<<ptr1;
    ptr2+=2;
    cout<<"the address of pointer ptr1"<<ptr2<<endl;
}
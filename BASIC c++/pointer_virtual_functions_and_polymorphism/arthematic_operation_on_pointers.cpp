//
// Created by rahul on 6/8/19.
//
#include <iostream>
using namespace std;
int main()
{
int num[]={56,57,98,100,99};
int *ptr;
int i;
cout<<"the array values are :"<<endl;
for(int i=0;i<5;i++)
    cout<<num[i]<<"\n";
ptr=num;
cout<<"value of ptr"<<*ptr;
cout<<"\n";
++ptr;
cout<<"value of ptr"<<*ptr;
ptr--;
cout<<"value of ptr"<<*ptr;
}
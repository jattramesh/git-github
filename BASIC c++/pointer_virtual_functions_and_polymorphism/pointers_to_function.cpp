//
// Created by rahul on 7/8/19.
//
#include <iostream>
using namespace std;
typedef void (*FUNPTR)(int ,int );
void add(int i,int j)
{
    cout<<i<<"+"<<j<<"="<<i+j;
}
void subtract(int i,int j)
{
    cout<<i<<"-"<<j<<"="<<i-j;
}
int main()
{
    FUNPTR ptr;
    ptr=&add;
    ptr(1,2);
    cout<<endl;
    ptr=&subtract;
    ptr(6,7);
    cout<<endl;
}
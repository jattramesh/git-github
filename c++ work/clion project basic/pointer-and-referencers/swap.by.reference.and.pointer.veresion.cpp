//
// Created by Rahul on 6/6/2019.
//

#include <iostream>
#include <iomanip>
using namespace std;
void swapp(int *,int *);
void swapr(int &,int &);
int main()
{
int p=10,q=20;
swapp(&p,&q);
cout<<p<<q<<endl;
swapr(p,q);
    cout<<p<<q<<endl;
}
void swapp(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swapr(int &c,int &d)
{
float temp;
temp=c;
c=d;
d=temp;
}
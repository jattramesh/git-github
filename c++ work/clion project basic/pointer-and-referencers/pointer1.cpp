//
// Created by Rahul on 6/5/2019.
//

#include <iostream>
#include<math.h>
using namespace std;
int var,*ptr;
int main()
{
    var=100;
    ptr=&var;
    cout<<"value of var "<<var<<"address of ptr"<<&var<<endl;
    cout<<"value pf ptr "<<ptr<<"address od ptr "<<&ptr<<endl;
    long a=10,b;
    long *ptr;
    ptr=&a;
    b=*ptr;
    cout<<ptr<<endl<<b<<endl;
    double x,y,*px;
    px=&x;
    *px=12;
    *px+=4.5;
    cout<<sin(*px)<<endl<<x<<endl;
    return 0;
}

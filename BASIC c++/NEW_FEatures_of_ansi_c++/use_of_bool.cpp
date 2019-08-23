//
// Created by rahul on 20/8/19.
//
#include <iostream>
using namespace std;
int main()
{
    int x1=10,x2=20,m=2;
    bool b1,b2;
    b1=x1==x2;
    b2=x1<x2;
    cout<<"b1 is "<<b1<<endl;
    cout<<"b2 is "<<b2<<endl;
    bool b3=true;
    cout<<"b3 is "<<b3<<'\n';
    if(b3)
        cout<<"very good"<<b3<<endl;
    else
        cout<<"very bad "<<endl;
    int x3=false+4*m-b3;
    int b4=x3;
    b2=0;
    cout<<"x3 ="<<x3<<endl;
    cout<<"now b1 "<<b4 <<"and b2 "<<b2<<"\n";
    return 0;

}
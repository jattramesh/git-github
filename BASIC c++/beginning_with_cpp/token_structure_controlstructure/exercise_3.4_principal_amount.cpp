//
// Created by rahul on 19/7/19.
//
#include <iostream>
#include <iomanip>
using namespace std;
#define size 10
int main()
{
    float v,pf;
    int n=size;
    float p[size]={1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
    float r[size]={0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.20};
    cout<<setw(5)<<"n=1"<<endl;
    for(int i=2;i<size;i++)
        cout<<setw(15)<<"n="<<i;
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<setw(-6)<<"p=";
        for(int j=0;j<size;j++)
        {
            if(j==0)
                pf=p[i];
            v=pf*(1+r[i]);
            cout.precision(2);
            cout.setf(ios::fixed,ios::floatfield);
            cout<<v<<setw(10);
            pf=v;
        }
cout<<"\n";
    }
    return 0;
}
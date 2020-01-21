//
// Created by rahul on 9/8/19.
//
#include <iostream>
using namespace std;
int main()
{
    cout.fill('<');
    cout.precision(3);
    for(int n=1;n<=6;n++)
    {
        cout.width(5);
        cout<<n;
        cout.width(10);
        cout<<1.0/float(n)<<"\n";
        if(n==3)
            cout.fill('>');
    }
    cout<<"\n padding changed";
    cout.fill('#');
    cout.width(15);
    cout<<12.35678<<endl;
    return 0;
}

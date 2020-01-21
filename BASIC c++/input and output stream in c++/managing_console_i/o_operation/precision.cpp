//
// Created by rahul on 9/8/19.
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"precison set to 3 digit\n";
    cout.precision(3);
    cout.width(10);
    cout<<"value";
    cout.width(15);
    cout<<"sqrt_of_value"<<endl;
    for(int i=1;i<5;i++)
    {
        cout.width(8);
        cout<<i;
        cout.width(13);
        cout<<sqrt(i)<<endl;
    }
    cout<<"\n precision set to 5 digit"<<endl;
    cout.precision(5);
    cout<<"sqrt(10)="<<sqrt(10)<<"\n\n";
    cout.precision(3);
    cout<<"sqrt(10)"<<sqrt(10)<<"(default setting )";
    return 0;
}
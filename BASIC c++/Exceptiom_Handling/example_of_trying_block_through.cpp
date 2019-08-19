//
// Created by rahul on 18/8/19.
//
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the values of a and b";
    cin>>a;
    cin>>b;
    int x=a-b;
    try {
        if(x!=0)
        {
            cout<<"result is (a/x)"<<a/x<<"\n";
        }
        else
        {
            throw(x); //through int obejct

        }
    }
    catch(int f)
    {
        cout<<"Exception caught "<<x<<"\n";
    }
    cout<<"End";
    return 0;

}
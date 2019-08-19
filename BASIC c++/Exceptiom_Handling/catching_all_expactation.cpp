//
// Created by rahul on 18/8/19.
//
#include <iostream>
using namespace std;
void test(int x)
{
    try{
        if(x==1)
            throw x;
        if(x==0)
            throw 'x';
        if(x==-1)
            throw 1.0;
    }
    catch(...)
    {
        cout<<"caught all expections\n";
    }
}
int main()
{
    cout<<"Testing Generic Catch";
    test(1);
    test(0);
    test(-1);
}
//
// Created by rahul on 18/8/19.
//
#include <iostream>
using namespace std;
void divide(int x,int y,int z)
{
    cout<<"we are inside the function\n";
    if((x-y)!=0)
    {
        int R=z/(x-y);
        cout<<"Result"<<R<<endl;
    }
    else
    {
        throw(x-y); //throw point
    }
}
int main()
{
try{
    cout<<"we are inside the try block";
    divide(10,20,30);
    divide(10,10,30);
}
catch(int i)
{
    cout<<"caught the exception \n";
}
return 0;
}

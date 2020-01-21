//
// Created by rahul on 19/7/19.
//
/*#include <iostream>
using namespace std;
int main()
{
    int i=0;
    i=400*400/4;
    cout<<i<<endl;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int num[]={1,2,3,4,5,6};
    num[1]==*(1+num) ? cout<<"sucess" : cout<<"error";//[1]num change to *(1+num)
}
*/
/*
#include <iostream>
int main()
{
    int i='5';
    while(i)
    {
        switch(i)
        {
            default:
            case '4':
            case '5':
                break;

            case '1':
                continue;
            case '2':
            case '3':
                break;

        }
        i--;
    }
}
*/
/*
#include <iostream>
using namespace std;
#define pi 3.14
int squareArea(int &);
int circleArea(int &);
int main()
{
    int a=10;
    cout<<squareArea(a)<<" ";
    cout<<circleArea(a)<<" ";
    cout<<a<<endl;
}
int squareArea(int &a)
{
    return a*=a;
}

int circleArea(int &r)
{
    return r=pi*r*r;
}
*/
#include <iostream>
#include <malloc.h>
using  namespace std;
char *allocateMemory();
char *str;
int main()
{

    str=allocateMemory();
    cout<<str<<endl;
    str=" ";
    cout<<str;
}
char *allocateMemory()
{
    str="Memory allocation test";
    return str;
}
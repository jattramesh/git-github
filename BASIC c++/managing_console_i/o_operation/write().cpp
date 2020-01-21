//
// Created by rahul on 9/8/19.
//
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *string="C++";
    char *string2="programming";
    int m=strlen(string);
    int n=strlen(string2);
    for(int i=1;i<n;i++)
    {
        cout.write(string2,i);
        cout<<"\n";
    }
    for(int i=n;i>0;i--)
    {
        cout.write(string2,i);
        cout<<"\n";
    }
    //concatenating string
    cout.write(string,m).write(string2,n);
    cout<<"\n";
    //crossing boundry
    cout.write(string,10);
    return 0;
}
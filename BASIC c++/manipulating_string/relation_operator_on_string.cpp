//
// Created by rahul on 19/8/19.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("ABC");
    string s2("XYZ");
    string s3=s1+s2;
    if(s1!=s2)
        cout<<"s1 is not equal to s2";
    if(s1>s2)
        cout<<"s1 is greater than s2";
    else
        cout<<"s2 is greater than s1";
    if(s3==s1+s2)
        cout<<"s3 is equal to s1+s2";
    int x=s1.compare(s2);
    if(x==0)
        cout<<"s1=s2";
    else if(x>0)
        cout<<"s1>s2";
    else if(x<0)
        cout<<"s1<s2";
    return 0;
}
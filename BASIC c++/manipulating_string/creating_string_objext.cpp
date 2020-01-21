//
// Created by rahul on 19/8/19.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    string s2("NEw");
    string s3("Delhi");
    s1=s2;
    cout<<"s1"<<s1<<endl;
    s1="Standard c++";
    cout<<"NOW s1"<<s1<<"\n";

    cout<<"enter a string"<<endl;
   string s4(s1);
    cin>>s4;
    cout<<"Now s4 "<<s4<<endl;
    s1=s2+s3;
    cout<<"S1 finally contains"<<s1<<"\n";
    return 0;

}
//
// Created by Rahul on 6/5/2019.
//

#include <iostream>
#include <string>
using namespace std;
string& message();
float x=10.6f;
int main()
{
    float &rx=x;
    rx*=2;
    cout<<rx<<endl;
    const float& cref=x;   //read only reference
    cout<<"cref "<<cref<<endl;
    const string str="i am a constant string\n";
    string str2="i am a checking projrct ";
    const string &ss=str2;
    string sss;
    sss=str2;
    cout<<sss<<endl;
    cout<<message()<<endl;
}
string& message()
{
    static string str="today only cold cuts";
    return str;
}

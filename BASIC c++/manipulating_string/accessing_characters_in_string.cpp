//
// Created by rahul on 19/8/19.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s("ONE TWO THREE FOUR");
    cout<<"the string contains ";
    for(int i=0;i<s.length();i++)
        cout<<s.at(i);
    cout<<"\n string is shown again"<<endl;
    for(int j=0;j<s.length();j++)
        cout<<s[j];
    int x1=s.find("TWO");
    cout<<"Two is found at"<<x1<<endl;
    int x2=s.find_first_of('T');
    cout<<"\n T is found at"<<x2<<endl;
    int x3=s.find_last_of('R');
    cout<<"\n R is last found at"<<x3<<endl;
    cout<<"retrive and print substring TWO"<<endl;
    cout<<s.substr(x1,3);
    cout<<endl;
    return 0;
}
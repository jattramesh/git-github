//
// Created by rahul on 19/8/19.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("12345");
    string s2("abcde");
cout<<"original string are \n";
cout<<"s1:"<<s1<<endl;
cout<<"s2:"<<s2<<endl;
//inserting a string into the another
s1.insert(4,s2);
cout<<"modified string "<<s1<<endl;
//removing charcater from  string
s1.erase(4,5);
cout<<"now s1"<<s1<<endl;
//replacing charcter in a string
cout<<"Relace middle 3 character"<<endl;
s2.replace(1,3,s1);
cout<<"Now s2"<<s2<<endl;
}

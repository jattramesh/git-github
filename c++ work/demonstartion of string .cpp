#include<iostream>
#include<string>
using namespace std;
string header ="Demonstrating use of string \n",
s1("As time by ..."),\
s2("goes ");
int main()
{
int pos=0;
cout<<header<<endl;
cout<<"s1 "<<s1<<endl;
//to insert
cout<<"inserting in string \""<<s2<<"\""<<endl;
pos=s1.find("by");
if(pos!=string::npos)
s1.insert(pos,s2);
cout<<"s1 :"<<s1<<endl;
//to erase
cout<<"erase remaining charcter behind \"by\":"<<endl;
pos=s1.rfind("by");
if(pos!=string::npos)
s1.erase(pos+2);
cout<<"s1 : "<<s1<<endl;
//to replace
cout<<"\n to replace \' time \' by \"bill\" "<<endl;
pos=s1.find("time");
if(pos!=string::npos)
s1=s1.replace(pos,4,"Bill");
cout<<"s1"<<s1<<endl;
return 0;
}

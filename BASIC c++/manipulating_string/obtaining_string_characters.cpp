//
// Created by rahul on 19/8/19.
//
#include <iostream>
#include <string>
using namespace std;
void display(string &str)
{
    cout<<"size "<<str.size()<<endl;
    cout<<"Length"<<str.length()<<endl;
    cout<<"capacity"<<str.capacity()<<endl;
    cout<<"Maximum size "<<str.max_size()<<endl;
    cout<<"Empty"<<(str.empty() ? "yes" : "No");
    cout<<endl<<endl;
}
int main()
{
    string str1;
    cout<<"initial status"<<endl;
    display(str1);
    cout<<"enter a string(one word) \n";
    cin>>str1;
    cout<<"status now ";
    display(str1);
    str1.resize(15);
    cout<<"status after resizing \n";
    display(str1);
    cout<<"\n";
return 0;
}
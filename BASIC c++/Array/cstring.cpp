//
// Created by Rahul on 6/13/2019.
//
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
cgar header[]="\n ***Cstrings*****\n\n";
int main()
{
    char hello[30]="hello ",name[20],message[80];
    cout<<header<<"your first name:  ";
    cin>>setw(20)>>name;
    strcat(hello,name);
    cout<<hello<<endl;
    cin.sync();    //no previous input
 cout<<"\n what is thwe message for today? "<<endl;
 cin.getline(message,80);
 if(strlen(message)>0)
     for(int i=0;message[i]!='\0'++i)
         cout<<message[i]<<' '<<endl;
     return 0;
}
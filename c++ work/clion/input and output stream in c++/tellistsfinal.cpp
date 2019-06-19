#include"tellist.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
inline void cls()
{
cout<<"\033[2J\n"; //if ansi control character are not avialiable output new lines
}
inline void go_on()
{
cout<,"\n\n go on with return !";
cin.sync();
cin.clear();
while(cin.get()!='\n')
;
}
int menu();
char askforsave();
char header[]="\n\n telephone list \n\n";
tellist myfriend; //a telephone list
int main()
{
int action=0;
string name;
while(action!='Q')
{
action=menu();
cls();
cout<<header<<endl;
switch(action)
{
case 'o':

}
}
}

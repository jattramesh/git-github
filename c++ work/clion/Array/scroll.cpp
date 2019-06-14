//
// Created by Rahul on 6/13/2019.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;
#define DELAY 10000000l
inline void cls()
{
    cout<<"\033[2J\n";
}
inline void locate(int z,int a)
{
    cout<<"\033[" <<z<<';'<<a<<'H';
};
char mes[]="******* BREAK***************";
int main()
{
    int i,start=0,len=strlen(mes);
   cls();
   locate(24,20);
   cout<<"----Press interrupt key to determine (^c)---------";
   while(true)
   {
       locate(12,25);
       i=start;
       do{
           cout<<mes[i++];
           i=i%len;
       }while(i!=start);
       cout<<endl;
       for(int count=0;count<DELAY;++count);
       ++start;
       start%=len;
   }
   cls();
   return 0;
}
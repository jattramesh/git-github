//
// Created by Rahul on 6/13/2019.
//
#include "Daytime.h"
#include <iostream>
using namespace std;
char header[]="\n\n********Table with daytime \n\n\n";
int main()
{
    daytime timetab[4]={18,daytime(10,25),daytime(14,55,30)};
    int i;
    timetab[3].settime(8,40,50); //last element
    cout<<header<<endl;
 for(i=0;i<4;++i)
 {
     timetab[i].print();
     cout<<endl;
 }
 //to compute bsortest of all time
 int i_min=0,i_max=0; //indices for shortest and longest
 for(i=1;i<4;++i)
 {
     if(timetab[i].isless(timetab[i_min]))
         i_min=i;
     if(timetab{i_max}.isless(timetab[i]))
         i_max=i;
 }
 cout<<"\n shortest time";
 timetab[i_min].print();
 cout<<"\n longest time ";
 timetab[i_max].print();
}



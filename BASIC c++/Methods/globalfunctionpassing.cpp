//
// Created by Rahul on 6/10/2019.
//implemmenting of swap as a method
#include "daytime_this_pointer_version.h"
//defines global variable function swap()
void swap(Daytime &t1,Daytime &t2)
{
    Daytime temp(t1);
    t1=t2;
    t2=temp;
}
//a call (e.g. in fumction main()
int main()
{
    Daytime arrival(14,10),arrival2(15,20),arr1;
    swap(arrival,arrival2);
arr1.print(arrival,arrival2);//my version of implementing of print show a extra 0 as constructor has 3 argument
arrival.swap(arrival2);
}
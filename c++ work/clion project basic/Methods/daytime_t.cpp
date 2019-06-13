//
// Created by Rahul on 6/11/2019.
//

#include "daytime_this_pointer_version.h"
#include <iostream>
using namespace std;
const Daytime& currentTime();
int main()
{
    Daytime cinema (20,30);
cout<<"the movie start at"<<cinema.print();
Daytime now(currentTime());  //cop-y constructor
cout<<"the current time is "<<now.print();
cout<<"\n the mmovie has ";
if(cinema.isLess(now))
    cout<<"already begun \n";
else
    "not yet begain";
}
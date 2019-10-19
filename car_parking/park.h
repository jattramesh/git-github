//
// Created by rahul on 19/10/19.
//

#ifndef CARPARKING_PARK_H
#define CARPARKING_PARK_H
int z,s;
#define LOCATE(z,s) (cout <<"\033["<<(z)<<';'<<(s)<<'H')
int gate[16];
int returner()
{
    if(gate[0]<10)
        return 1;
    else if(gate[0] >=10 && gate[0] < 100)
        return 2;
    else if(gate[0] >=100 && gate[0] < 1000)
        return 3;
    else if(gate[0] >=1000 && gate[0] < 10000)
        return 4;
}
int total_sum;
#include <iostream>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fstream>
int box_counter=0;
using namespace std;
class Rect{
public:
    void straight();
    void left_right();
    void bottom();
};
void Rect::straight() {
 cout<<setw(15)<<"\n---------------";
    cout<<"\n";
}
void Rect::left_right() {
    cout<<"|"<<setfill(' ')<<setw(15)<<"|"<<"\n";
    cout<<"|"<<setfill(' ')<<setw(15)<<"|"<<"\n" ;cout<<"|"<<setfill(' ')<<setw(15)<<"|"<<"\n";

}
void Rect::bottom(){
    cout<<setfill('-')<<setw(15);
    cout<<"\n";
}
class design_box : public Rect
{
public:
   void  box_maker() {
       straight();
           cout << setfill(' ')<<"| Slot" <<setw(4)<<setw(9)<<++(::box_counter)<< "|\n";
           cout << setfill(' ')<<"|Total_car"<<setw(5)<<gate[0]<<"|\n";
       left_right();
       bottom();
       if(::box_counter==16)
           ::box_counter=0;
   }

};

#endif //CARPARKING_PARK_H

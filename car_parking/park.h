//
// Created by rahul on 19/10/19.
//

#ifndef CARPARKING_PARK_H
#define CARPARKING_PARK_H
int i=0;
int z,s;
char var='A';
int j=0;
#define LOCATE(z,s) (cout <<"\033["<<(z)<<';'<<(s)<<'H')
int gate[16];
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
void srand(void);
unsigned int num=9;
void vala()
{
    srand(num);
if((rand()%5)==0 && j==0)
{
    cout<<rand()<<++gate[0];
++j;
}
if((rand()%3)==0 && j==1)
{++gate[1];
++j;}
if((rand()%4)==0 && j==2)
{++gate[2];
++j;
}
if((rand()%2)==0 && j==3)
{++gate[3];
++j;}
if((rand()%3)==0 && j==4)
{++gate[4];
j++;}
if((rand()%4)==0 && j==5)
{++gate[5];
j++;
}
if((rand()%3)==0 && j==6)
{++gate[6];
++j;}
if((rand()%5)==0 && j==7)
{++gate[7];
++j;}
if((rand()%3)==0 && j==8)
{gate[8];
++j;}
if((rand()%1)==0 && j==9)
{++gate[9];
++j;}
if((rand()%2)==0 && j==10)
{++gate[10];
++j;
}
if((rand()%3)==0 && j==11)
{++gate[11];
++j;}
if((rand()%1)==0 && j==12)
{++gate[12];
++j;
}
if((rand()%3)==0 && j==13)
{++gate[13];
++j;}
if((rand()%2)==0 && j==14)
{++gate[14];
++j;
}
if((rand()%3)==0 && j==15)
{++gate[15];
++j;
}
::j=0;
}
void drawani()
{
    for(int i=0;i<950;i++)
    for(int j=0;j<10000;j++);
    cout<<".";
    for(int i=0;i<950;i++)
    for(int j=0;j<10000;j++);
    cout<<'.';
    for(int i=0;i<950;i++)
        for(int j=0;j<10000;j++);
        cout<<'.';
}
void print()
{
    for(int i=0;i<16;i++)
    cout<<gate[i]<<endl;
}
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
    cout<<"|"<<setfill(' ')<<setw(17)<<"|"<<"\n";
    cout<<"|"<<setfill(' ')<<setw(17)<<"|"<<"\n" ;cout<<"|"<<setfill(' ')<<setw(15)<<"|"<<"\n";

}
void Rect::bottom(){
    cout<<setfill('-')<<setw(19);
    cout<<"\n";
}
class design_box : public Rect
{
public:
   void  box_maker(int val) {
     if(::box_counter==36)
     ::box_counter=0;
       straight();
           cout << setfill(' ')<<"| Booth " <<setw(4)<<setw(9)<<++box_counter<< "|\n";
           cout << setfill(' ')<<"|Enter Vote"<<setw(5)<<val<<" | "<<"Converting";
           cout<<'\n';
       left_right();
       bottom();
       if(::box_counter==36)
       ::box_counter=0;
   }

};

#endif //CARPARKING_PARK_H

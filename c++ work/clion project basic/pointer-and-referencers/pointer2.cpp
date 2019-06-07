//
// Created by Rahul on 6/5/2019.
//
#include <iostream>
using namespace std;
void swap(float  *,float   *);
int main()
{
    float x=11.1f;
    float y=22.2f;
    swap(&x,&y);
    cout<<x<<endl<<y<<endl;
}
void swap(float *p1,float *p2)
{
    float temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

}
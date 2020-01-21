//
// Created by rahul on 27/7/19.
//
#include <iostream>
using namespace std;
class complex{
    float x;
    float y;
public:
    void input(float real,float imag)
    {
        x=real;
        y=imag;
    }
    friend complex sum(complex,complex);
    void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return (c3);
}
void complex::show(complex c) {
    cout<<c.x<<"+j"<<c.y<<"\n";
}
int main()
{
    complex a,b,c;
    a.input(3.1,4.5);
    b.input(4.1,5.5);
    c=sum(a,b);
    cout<<"A=";a.show(a);
    cout<<"B=";b.show(b);
    cout<<"C=";c.show(c);
}
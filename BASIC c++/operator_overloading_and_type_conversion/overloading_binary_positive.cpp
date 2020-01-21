//
// Created by rahul on 31/7/19.
//
#include <iostream>
using namespace std;
class complex{
    float x;
    float y;
public:
    complex(){ }  //constructor 1
    complex(float real,float imag)
    {
        x=real;
        y=imag;
    }
    complex operator+(complex);
    void display(void);
};
complex complex::operator+(complex c) {
    return complex((x+c.x),(y+c.y));
}
void complex::display(void) {
    cout<<x<<"+j"<<y<<"\n";
}
int main()
{
    complex c1,c2,c3;
    c1=complex(2.25,3.5);
    c2=complex(1.6,3.4);
    c3=c1+c2;
    cout<<"c1";
    c1.display();
    cout<<"c2";
    c2.display();
    cout<<"c3";
    c3.display();
}
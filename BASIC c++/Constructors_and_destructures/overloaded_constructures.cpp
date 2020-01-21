//
// Created by rahul on 30/7/19.
//
#include <iostream>
using namespace std;
class complex{
    float x,y;
public:
    complex()
    { }
    complex(float a) {
        x = y = a;
    }
    complex(float real,float imag);
    complex(complex &);
    friend complex sum(complex,complex);
    friend void show(complex);
};
complex::complex(float real, float imag) {
    x=real;
    y=imag;
}
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}
complex::complex(complex &t) {
    x=t.x;
    y=t.y;
}
void show(complex c)
{
    cout<<c.x<<"+j"<<c.y<<"\n";
}
int main()
{
    complex a(2.7,3.5);
    complex b(1.6);
    complex c;
    c=sum(a,b);
    cout<<"a";
    show(a);
    cout<<"b";
    show(b);
    cout<<"c";
    show(c);
    complex d(c);
    cout<<"\n";
    show(d);
}
//
// Created by rahul on 31/7/19.
//
#include <iostream>
using namespace std;
class space
{
    int x,y,z;
public:
    void getdata(int a,int b,int c);
    void display(void);
    void operator-(); //overload uranary operator
};
void space::getdata(int a, int b, int c) {
    x=a;
    y=b;
    z=c;
}
void space::display() {
    cout<<x<< " ";
    cout<<y<<" ";
    cout<<z<<" \n";
}
void space::operator-() {
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s;
    s.getdata(10,-20,30);
    cout<<"s :";
    s.display();
    -s;
    cout<<"s :";
    s.display();
    return 0;
}
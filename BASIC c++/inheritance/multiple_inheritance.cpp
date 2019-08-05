//
// Created by rahul on 5/8/19.
//
#include <iostream>
using namespace std;
class M{
protected:
    int m;
public:
    void get_m(int );
};
class N{
protected:
    int n;
public:
    void get_n(int );
};
class p:public M,public N{
public:
    void diplay(void);
};
void M::get_m(int x) {
    m=x;
}
void N::get_n(int y) {
    n=y;
}
void p::diplay(void) {
    cout<<"m="<<m<<endl;
    cout<<"n="<<n<<endl;
    cout<<"m*n"<<m*n<<endl;
}
int main()
{
    p P;
    P.get_m(10);
    P.get_n(20);
    P.diplay();
    return 0;
}

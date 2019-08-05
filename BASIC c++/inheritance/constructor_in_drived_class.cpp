//
// Created by rahul on 5/8/19.
//
#include <iostream>
using namespace std;
class alpha{
    int x;
public:
    alpha(int l)
    {
        x=l;
        cout<<"alpha initialised \n";
    }
    void show_x(void)
    {
        cout<<"x"<<x<<"\n";
    }
};
class beta{
    float y;
public:
    beta(float j)
    {
        y=j;
        cout<<"beat initialized"<<endl;
    }
    void show_y(void)
    {
        cout<<"y ="<<y<<endl;
    }
};
class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma(float  a,int  b,int c,int d):alpha(b),beta(a)
    {
        m=c;
        n=d;
        cout<<"gamma initialised"<<endl;
    }
    void show_mn(void)
    {
        cout<<"m="<<m<<endl;
        cout<<"n="<<n<<endl;
    }
};
int main()
{
    gamma g(5.1,10,20,30);
    cout<<"\n";
    g.show_x();
    g.show_y();
    g.show_mn();
}
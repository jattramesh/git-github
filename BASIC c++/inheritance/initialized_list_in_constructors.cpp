//
// Created by rahul on 5/8/19.
//
#include <iostream>
using namespace std;
class alpha{
    int x;
public:
    alpha(int i):x(i)
    {
        cout<<"constructer alpha";
    }
    void show_alpha(void)
    {
        cout<<"x="<<x<<endl;
    }};
class beta{
    float p,q;
public:
    beta(float a,float b):p(a),q(p*b)
    {
        cout<<"\n beta constructed ";
    }
    void show_beta(void)
    {
        cout<<"p="<<p<<endl;
        cout<<"q"<<q<<endl;
    }
};
class gamma : public alpha,public beta
{
    int u,v;
public:
    gamma(float a,float b,int c,int d):alpha(c),beta(a,b),u(c)
    {
        v=d;
        cout<<"\n gamma constructed"<<endl;
    }
    void show_uv(void)
    {
        cout<<"u="<<u<<endl;
        cout<<"v="<<v<<endl;
    }
};
int main()
{
    gamma g(3.4,4.5,1,2);
    g.show_alpha();
    g.show_beta();
    g.show_uv();
    return 0;
}

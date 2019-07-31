//
// Created by rahul on 26/7/19.
//
#include <iostream>
using namespace std;
class abc; //forward  deceleration
class xyz{
    int x;
public:
    void setvalue(int i)
    {
        x=i;
    }
    friend void max(xyz,abc);
};
class abc{
    int a;
public:
    void setvalue(int i){
        a=i;
    }
    friend void max(xyz,abc);
};
void max(xyz m,abc n)
{
    if(m.x>n.a)
        cout<<m.x;
    else
        cout<<n.a;
}
int main()
{
    abc ab;
    ab.setvalue(11);
    xyz xy;
    xy.setvalue(22);
    max(xy,ab);
}

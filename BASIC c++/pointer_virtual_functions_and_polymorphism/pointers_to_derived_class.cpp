//
// Created by rahul on 8/8/19.
//
#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout<<"b"<<b<<"\n";
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout<<"b"<<b<<endl;
        cout<<"d="<<d<<"\n";
    }
};
int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    bptr->b=100;
    cout<<"b ptr point to base class object"<<endl;
    bptr->show();
    DC derived;
    bptr=&derived;
    bptr->b=200;
    bptr->show();
    DC *dptr;
    dptr=&derived;
    dptr->d=999;
    dptr->show();
    cout<<"using ((DC *)bptr )\n";
    ((DC *)bptr)->d=400;
    ((DC *)bptr)->show();
}

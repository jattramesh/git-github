//
// Created by Rahul on 6/10/2019.
//
#include <iostream>
using namespace std;
class test
{
    int a,b;
public:
    void show()
    {
        a=10;
        b=20;
        cout<<"obj address "<<this<<endl;

        cout<< this->a <<endl;
        cout<<this->b<<endl;//(this-> eq is *this)
    }
};
int main()
{
    test t;
    t.show();
}

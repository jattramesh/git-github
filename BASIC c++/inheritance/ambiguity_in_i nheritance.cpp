//
// Created by rahul on 5/8/19.
//
#include <iostream>
using namespace std;
class M{
protected:
    int m;
public:
    void get_m(int v)
    {
        m=v;
    }
    void display(void)
    {
        cout<<m<<endl;
    }
};
class N:public M{
    int n;
public:
    void get_n(int c)
    {
        n=c;
    }
    void display(void)
    {
        cout<<n<<endl;
        M::display();
    }
};
int main()
{
    N cl;
    cl.get_n(12);
    cl.get_m(13);
    cl.M::display();
    cl.display();
}

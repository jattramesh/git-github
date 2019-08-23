//
// Created by rahul on 20/8/19.
//
#include <iostream>
using namespace std;
class A{
    int m;
public:
    explicit A (int i)
    {
        m=i;
    }
    void show(void)
    {
        cout<<m;
    }
};

int main()
{
    A abc(100);
    abc.show();
}
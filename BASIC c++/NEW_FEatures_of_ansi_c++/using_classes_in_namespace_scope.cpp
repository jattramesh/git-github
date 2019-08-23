//
// Created by rahul on 20/8/19.
//
#include <iostream>
using namespace std;
namespace classes
{
    class test
    {
    private:
        int m;
    public:
        test(int a)
        {
            m=a;
        }
        void display()
        {
            cout<<"m="<<m<<endl;
        }
    };
}
int main()
{
    classes::test t1(100);
    t1.display();
    using namespace classes;
    test t2(400);
    t2.display();
    return 0;
}
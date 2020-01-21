//
// Created by rahul on 26/7/19.
//
#include <iostream>
using namespace std;
class class_2;
class class_1{
    int value1;
public:
    void getdata(int a)
    {
        value1=a;
    }
    void display(void)
    {
        cout<<value1<<"\n";
    }
    friend void exchange(class_1 &,class_2 &);
};
class class_2{
    int value2;
public:
    void getdata(int i)
    {
        value2=i;
    }
    void display(void)
    {
        cout<<value2;
    }
    friend void exchange(class_1 &x,class_2 &y);
};
void exchange( class_1 &x, class_2 &y)
{
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main()
{
    class_1 c1;
    class_2 c2;
    c1.getdata(50);
    c1.display();
    c2.getdata(100);
    c2.display();
    exchange(c1,c2);
    c1.display();
    c2.display();
}
/* more about friend function
 * class x{
 * int fun();
 * };
 * class y{
 * friend int x::fun();
 * }
 * class z{
 * friend class x; //all function of class x are  now friend to z
 * }
 * */

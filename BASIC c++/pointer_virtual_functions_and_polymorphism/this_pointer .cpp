//
// Created by rahul on 8/8/19.
//
#include <iostream>
#include <cstring>
using namespace std;
class person{
    char name[20];
    float age;
public:
    person(char *s,float a)
    {
        strcpy(name,s);
        age =a ;
    }
    person & greater(person & x) {
        if (x.age > age)
            return x;
        else
            *this;
    }
    void display(void)
    {
        cout<<"name"<<name;
        cout<<"age"<<age;
    }
    };
int main()
{
    person p1("johnn",39.5);
    person p2("sau",34.5);
    person p3("kul",345.4);
    person P=p1.greater(p2);
    cout<<"elder person is";
    P.display();
    P=p1.greater(p3);
    cout<<"elder person is ";
    P.display();
    return 0;
}

//
// Created by rahul on 20/8/19.
//
#include <iostream>
using namespace std;
class A{
private:
    mutable int m;
public:
    explicit A(int i)
    {
        m=i;
    }
    void change() const{
        m=m+10;
    }
    int display() const{
        return m;
    }
};
int main()
{
const A a(100);
cout<<"a constains"<<a.display();
a.change();
cout<<"\n a now constains"<<a.display();
cout<<"\n";
return 0;
}
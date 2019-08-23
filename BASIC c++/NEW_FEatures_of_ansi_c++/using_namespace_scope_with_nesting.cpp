//
// Created by rahul on 20/8/19.
//
#include <iostream>
using namespace std;
/*namespace Testspace
{
    int m;
    void display(int n)
    {
        cout<<n;
    }
}
int main()
{
    using Testspace::m;
    m=109;
    //display(200); not ok as not use
    m=10;
}
*/
namespace name1{
    double x=4.56;
    int m=100;
    namespace name2{
        double y=1.23;
    }

}
namespace
{
    int m=200;
}
int main()
{\
cout<<"x="<<name1::x<<"\n";
cout<<"m="<<name1::m<<endl;
cout<<"y="<<name1::name2::y<<endl;
}
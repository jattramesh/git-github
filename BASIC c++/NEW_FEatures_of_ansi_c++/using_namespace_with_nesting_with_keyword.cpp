//
// Created by rahul on 20/8/19.
//
#include <iostream>
using namespace std;
namespace name1{
    double x=4.56;
    int m=100;
    namespace name2{
        double y=1.23;
    }

}
namespace name3
{
    int m=200;
}
int main()
{
    using namespace name1;
    cout<<"x="<<x<<'\n';
    using name3::m;
    cout<<"m"<<m<<endl;
}


//
// Created by Rahul on 6/4/2019.
//

#include <iostream>
#include <iomanip>
using namespace std;
int var=0;
namespace special{int var =100;}
int main()
{
    int var=10;
    cout<<setw(10)<<var;
    {
        int var=10;
        cout<<setw(10)<<var<<endl;
        {
            ++var;
            cout<<setw(10)<<var;
            cout<<setw(10)<<++::var;
            cout<<setw(10)<<special::var*2;
        }
        cout<<setw(10)<<var -::var;
    }
    cout<<setw(10)<<var<<endl;
}

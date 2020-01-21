//
// Created by rahul on 31/7/19.
//

#include <iostream>
using namespace std;
int count=0;
class alpha
{
public:
    alpha()
    {
        count++;
        cout<<count<<"number of object created "<<endl;
    }
    ~alpha()
    {
        cout<<"\nno of object destroyed"<<count;
        count--;
    }
};
int main()
{
    cout<<"Enter main()"<<endl;
    alpha A1,A2,a3,a4;
    {
        cout<<"enter block1 ";
        alpha a5;
    }
    {
        cout<<"\n\n enter block 2"<<endl;
        alpha a6;
    }
    cout<<"\n\nre-enter main()"<<endl;
    return 0;
}
//
// Created by rahul on 25/7/19.
//
#include <iostream>
using namespace std;
class item{
    int number;
    float cost;
public:
    void getdata(int a,float b);
    //function defiened inside class these are predefiend inline
    void putdata(void)
    {
        cout<<"Number"<<number<<endl;
        cout<<"cost"<<cost<<endl;
    }
};
void item::getdata(int a, float b) {
    number=a;
    cost=b;
}
int main()
{
    item x;
    x.getdata(100,299.99);
    x.putdata();
    item y;
    cout<<"object y"<<endl;
    y.getdata(200,175.20);
    y.putdata();
    return 0;
}
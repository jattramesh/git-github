//
// Created by rahul on 8/8/19.
//
#include <iostream>
using namespace std;
class base {
public:
    void display()
    {
        cout<<"display base ";
    }
    virtual void show(){
        cout<<"\n show base ";
    }
};
class derieved:public base{
public:
    void display(void){
        cout<<"in class derieved";
    }
    void show()
    {
        cout<<"in show derieved ";
    }
};
int main()
{
    base b;
    derieved d;
    base *ptr;
    cout<<"ptr points to base obj";
    ptr=&b;
    ptr->display();
    cout<<endl;
    ptr->show();
    cout<<" ptr now points to derieved ";
    cout<<endl;
    ptr=&d;

    ptr->display();
    cout<<endl;
    //call base version
    ptr->show(); //call derived version
    return 0;

}

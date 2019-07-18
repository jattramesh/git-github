//
// Created by rahul on 18/7/19.
//
#include <iostream>
using namespace std;
class person{
private:
    char name[30];
    int age;
public:
    void getdata(void);
    void display(void);
};
void person::getdata() {
    cout<<"enter name";
    cin>>name;
    cout<<"enter age";
    cin>>age;
}
void person::display() {
    cout<<"\nName : "<<name;
    cout<<"\n Age :"<<age;
}
int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}


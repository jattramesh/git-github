//
// Created by rahul on 26/7/19.
//
#include <iostream>
using namespace std;
class employee{
    char name[30];
    float age;
public:
    void getdata(void);
    void putdata(void);

};

void employee::getdata()
{
    cout<<"enter name";
    cin>>name;
    cout<<"enter age ";
    cin>>age;
}
void employee::putdata() {
    cout<<"name"<<name;
    cout<<"age"<<age;
}
const int size=3;
int main()
{
    employee manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<"detail of manager "<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<"manager"<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}
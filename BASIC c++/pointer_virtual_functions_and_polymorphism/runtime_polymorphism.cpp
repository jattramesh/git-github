//
// Created by rahul on 8/8/19.
//
#include <iostream>
#include <cstring>
using namespace std;
class media{
protected:
    char title[20];
    float price;
public:
    media(){}
    media(char *s,float p)
    {
        strcpy(title,s);
        price=p;
    }
    void virtual  display(){} //empty virtual function
};
class book: public media
{
    int pages;
public:
    book(char *s,float a,int p):media(s,a)
    {
        pages=p;
    }
    void display();
};
class tape : public  media{
    float time;
public:
    tape(char *s,float price,float t): media(s,price)
    {
        time=t;
    }
    void display();
};
void book::display() {
    cout<<"\n title "<<title;
    cout<<"\n pages"<<pages;
    cout<<"\n price"<<price;
}
void tape::display() {
    cout<<"title "<<title;
    cout<<endl<<"price"<<price<<endl;
    cout<<"time"<<time<<endl;
}
int main()
{
    char *title=new char[30];
    float price,time;
    int pages;
    //book detail
    cout<<"enter book detail"<<endl;
    cout<<"title";cin>>title;
    cout<<"price";cin>>price;
    cout<<"pages";cin>>pages;
    book book1(title,price,pages);
    cout<<"enter tape details"<<endl;
    cout<<"title:";cin>>title;
    cout<<"price:";cin>>price;
    cout<<"time";cin>>time;
    tape tape1(title,price,time);
    media *list[2];
    list[0]=&book1;
    list[1]=&tape1;
    list[0]->display();
    list[1]->display();
    media *ptr;
    media obj;
    ptr=&obj;
    ptr->display();
}

//
// Created by rahul on 5/8/19.
//
#include <iostream>
using namespace std;
class student{
protected:
    int roll_no;
public:
    void get_rollno(int );
    void put_rollno(void);
};
void student::get_rollno(int a) {
roll_no=a;
}
void student::put_rollno() {
    cout<<"Roll number"<<roll_no<<"\n";
}
class test:public student{
protected:
    float sub1;
    float sub2;
public:
    void get_marks(float,float);
    void put_marks(void);
};
void test::get_marks(float x, float y) {
    sub1=x;
    sub2=y;
}
void test::put_marks() {
    cout<<"Marks in sub1"<<sub1<<endl;
    cout<<"Marks in sub2"<<sub2<<endl;
}
class result:public test{ //second level deriivation
    float total; //private by default
public:
    void display(void);
};
void result::display() {
    total=sub1+sub2;
    put_rollno();
    put_marks();
    cout<<"Total = "<<total<<"\n";
}
int main()
{
    result student1;
    student1.get_rollno(111);
student1.get_marks(29.9,59.5);
student1.display();
return 0;
}
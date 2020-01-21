//
// Created by rahul on 5/8/19.
//
#include <iostream>
using namespace std;
class student{
protected:
    int roll_no;
public:
    void get_number(int a)
    {
        roll_no=a;
    }
    void put_number(void)
    {
        cout<<"Roll number"<<roll_no<<endl;
    }
};
class test:  public virtual student{
protected:
    float part1,part2;
public:
    void get_marks(float x,float y)
    {
        part1=x;
        part2=y;
    }
    void put_marks(void)
    {
        cout<<"Marks Obtained"<<endl;
        cout<<"part1"<<part1<<"\n"<<"part2"<<part2<<endl;
    }
};
class sports:public virtual  student{
protected:
    float score;
public:
    void get_score(float s )
    {
        score=s;
    }
    void put_score(void)
    {
        cout<<"sport weight"<<score<<endl;
    }
};
class result:public test,public sports{
    float total;
public:
    void display(void);
};

void result::display() {
    total=part1+part2+score;
    put_number();
    put_marks();
    put_score();
    cout<<"total score :"<<total<<"\n";
}
int main()
{
    result student1;
    student1.get_number(766);
    student1.get_marks(30.5,25.5);
    student1.get_score(7.6);
    student1.display();
}
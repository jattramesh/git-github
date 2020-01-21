//
// Created by rahul on 5/8/19.
//
#include <iostream>
using namespace std;
class student{
protected:
    int rollno;
public:
    void get_roll(int a)
    {
        rollno=a;
    }
    void put_number(void)
    {
        cout<<"Roll number"<<rollno<<endl;
    }
};
class test:public student{
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
        cout<<"marks obtained\n";
        cout<<"part 1 "<<part1<<endl<<"part 2"<<part2<<endl;
    }
};
class sport{
protected:
    float score;
public:
    void get_score(float s)
    {
        score=s;
    }
    void put_score(void)
    {
        cout<<"sport wt"<<score<<"\n\n";
    }
};
class  result:public test , public sport
{
    float total;
public:
    void display(void);
};
void result::display() {
    total=part1+part2+score;
    put_number();
    put_marks();
    put_score();
    cout<<"total score"<<total<<endl;
}
int main()
{
    result t1;
    t1.get_roll(12434);
    t1.get_score(6.9);
 t1.get_marks(27.5,33.0);
 t1.display();
}
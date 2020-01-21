//
// Created by rahul on 26/7/19.
//
#include <iostream>
using namespace std;
class time{
    int hour;
    int minute;
public:
    void gettime(int h,int m)
    {
        hour=h;
        minute=m;
    }
    void puttime(void)
    {
        cout<<hour<<"\t";
        cout<<"minute"<<minute;
    }
    void sum(time,time);    //decleration as argument of time type
};
void time::sum(time t1, time t2) {
    minute=t1.minute+t2.minute;
    hour=minute/60;
    minute=minute%60;
    hour=hour+t1.hour+t2.hour;
}
int main()
{
class      time T1,T2,T3;
    T1.gettime(2,45);
    T2.gettime(3,30);
    T3.sum(T1,T2);
    cout<<"T1 = ";T1.puttime();
    cout<<"T2 =";T2.puttime();
    cout<<"T3 =";T3.puttime();
}
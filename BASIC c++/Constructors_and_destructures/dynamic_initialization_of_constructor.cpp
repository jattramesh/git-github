//
// Created by rahul on 30/7/19.
//
#include <iostream>
using namespace std;
class fixed_deposit {
    long int P_amount;
    int years;
    float rate;
    float R_value;
public:
    fixed_deposit(){ }
    fixed_deposit(long int p,int y,float r=0.12);
    fixed_deposit(long int p,int y,int  r);
    void display(void);
};
fixed_deposit::fixed_deposit(long int p, int y, float r) {
    P_amount=p;
    years=y;
    rate=r;
    R_value=P_amount;
    for(int i=1;i<=y;i++)
        R_value=R_value*(1.0+r);
}
fixed_deposit::fixed_deposit(long int p, int y, int r) {
    P_amount=p;
    years=y;
    rate=r;
    R_value=P_amount;
    for(int i=1;i<=y;i++)
        R_value=R_value*(1.0+float(r)/100);
}

void fixed_deposit::display() {
    cout<<"\n"<<"principal amount "<<P_amount<<"\n"<<"return Value"<<R_value<<"\n";
}
int main()
{
    fixed_deposit fd1,fd2,fd3; //deposit created
    long int p;
    int y;
    float r;
    int R;
    cout<<"Enter amount,period,time and rate(decimal form)"<<"\n";
    cin>>p>>y>>r;
    fd1=fixed_deposit(p,y,r);
    cout<<"enter amount,period,rate int precent form"<<"\n";
    cin>>p>>y>>R;
    fd2=fixed_deposit(p,y,R);
    cout<<"enter amount and period\n";
    cin>>p>>y;
    fd3=fixed_deposit(p,y);
    cout<<"\n deposit 1";
    fd1.display();
    cout<<"\n deposit 2";
    fd2.display();
    cout<<"\n deposit 3";
    fd3.display();
    return 0;
}

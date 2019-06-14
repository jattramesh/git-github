//
// Created by Rahul on 6/9/2019.
//
//constructors  definig class with two arguments
#include "constructors.h"
#include <iomanip>
using namespace std;
account::account(const string& a_name, unsigned long a_nr,double a_state)
{
    name=a_name;
    nr=a_nr;
    state=a_state;
}
account::account(const string &a_name)
{
    name=a_name;
    nr=111111111;
    state=0.0;
};
account::account()
{
    cout<<"initializers"<<endl;
}

bool account::init(const string & iname, unsigned long inr, double ibalance) {
    if(name.size()<1)
        return false;
name=iname;
nr=inr;
state=ibalance;
}
void account::display(void) {
    cout<<fixed<<setprecision(2)<<"account holder ------"<<name<<"balance -------"<<state<<'\n'<<"----------------"<<"number "<<nr<<endl;
}
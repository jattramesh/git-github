//
// Created by Rahul on 6/6/2019.
//

#include <iostream>
#include "account.h"
#include <iomanip>
using namespace std;
//the method init copies the gu=iven argument into [private members of class Account
bool Account::init(const string & iname, unsigned long inr, double ibalance) {
    if(iname.size()<1)
        return false;
    name=iname;
    nr=inr;
    balance=ibalance;
    return true;
}
//method display to display output private data
void Account::display() {
    cout<<fixed<<setprecision(2)<<"-------------------"<<"account holder"<<name<<'\n'<<"account holder"<<nr<<'\n'<<"account balance "<<balance <<'\n'<<"-----------------------------------------"<<'\n'<<endl;

}

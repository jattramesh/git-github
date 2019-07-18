//
// Created by Rahul on 6/9/2019.
//

#ifndef METHODS_ACCOUNT_INLINE_VERSION_H
#define METHODS_ACCOUNT_INLINE_VERSION_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class account{
private:
    string name;       //account holder
    unsigned long nr;    //account number
    double state;   //state of acccount
public://public interface
    account(const string &a_name="X",unsigned long a_nr=11111111l,double  a_state=0.0)
    {
        name=a_name;
        nr=a_nr;
        state=a_state
    }
    ~account(){};

};

//display outputs data of class account
inline void account::display() //explict inline
{
    cout<<setprecision(2)<<"-------------------"<<"account holder "<<name<<'\n'<<"account number "<<nr<<endl<<"account state"<<state<<endl;

}
#endif //METHODS_ACCOUNT_INLINE_VERSION_H

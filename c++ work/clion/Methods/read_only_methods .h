//
// Created by Rahul on 6/9/2019.
//

#ifndef METHODS_READ_ONLY_METHODS_H
#define METHODS_READ_ONLY_METHODS_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Account{
private:
    string name ;
    unsigned long nr;
    double state
public:
    Account(const string& a_name="x", unsigned long a_nr=111111l,double a_state=0.0)
    {
        name=a_name;
        nr=a_nr;
        state=a_state;
    }
    ~account(){};
    //get methods

    const string& getName() const{return name;}
    unsigned long getNr() const{return nr;}
    double getState() const {return state;}
    bool setname(const string&)
    {
        if(s.size()<1)
            return false;
        else
            return true;
    }
    void setnr(unsigned long inum){nr=inum;}
    void setstate(double x){state=x;}
};
inline void Account::display(void) const
{
    cout<<fixed<<setprecision(2)<<"account holder ------"<<name<<"balance -------"<<state<<'\n'<<"----------------"<<"number "<<nr<<endl;
}

/*
 * Since the const keyword is part of the method’s signature, you can define two versions
of the method: a read-only version, which will be called for constant objects by default,
and a normal version, which will be called for non-const objects.
 */
#endif //METHODS_READ_ONLY_METHODS_H

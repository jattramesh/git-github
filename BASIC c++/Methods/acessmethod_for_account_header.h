//
// Created by Rahul on 6/9/2019.
//

#ifndef METHODS_ACESSMETHOD_FOR_ACCOUNT_HEADER_H
#define METHODS_ACESSMETHOD_FOR_ACCOUNT_HEADER_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class account
{
private:
string name;
unsigned long nr;
double state;
public: //public interface
    account(const string& a_name="x", unsigned long a_nr=111111l,double a_state=0.0)
    {
    name=a_name;
    nr=a_nr;
    state=a_state;
    }
    ~account(){}
//acess methods
const string& getname(void){return name;}
bool setname(const string& s)
{
    if(s.size()<1)
        return false;
    else
        return true;
}
unsigned long getNr(void){return nr;}
void setNr(unsigned long n){nr=n;}
double getstate(){return state;}
void setstate(double x){state=x;}
void display(void);
};
/*■ Access methods can prevent invalid access attempts at the onset by performing
sanity checks. If a class contains a member designed to represent positive numbers
only, an access method can prevent processing negative numbers.
■ Access methods also hide the actual implementation of a class. It is therefore possible
to modify the internal structure of your data at a later stage. If you detect
that a new data structure will allow more efficient data handling, you can add
this modification to a new version of the class. Provided the public interface to
the class remains unchanged, an application program can be leveraged by the
modification without needing to modify the application itself. You simply recompile
the application program.
 */
#endif //METHODS_ACESSMETHOD_FOR_ACCOUNT_HEADER_H

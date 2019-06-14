//
// Created by Rahul on 6/9/2019.
//
//defing class with two constructors

#ifndef METHODS_CONSTRUCTORS_H
#define METHODS_CONSTRUCTORS_H
#include <iostream>
#include <string>
using namespace std;
class account
{
private:
    string name;
    unsigned long nr ;//account number
    double state; //state of account
public: //public interface
    account(const string&, unsigned long,double);
    account(const string&);
    account(void);
    bool init(const string&, unsigned long,double );
    void display();
};
#endif //METHODS_CONSTRUCTORS_H

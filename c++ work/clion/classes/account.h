//
// Created by Rahul on 6/6/2019.
//

#ifndef CLASSES_ACCOUNT_H
#define CLASSES_ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;
class Account
{
private:                    //sheltered member
    string name;
    unsigned long nr;
    double balance;

public:      //public interfacee
    bool init(const string&, unsigned long,double);
    void display();
};
#endif //CLASSES_ACCOUNT_H

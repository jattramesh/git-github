//
// Created by Rahul on 6/7/2019.
//

#include "account.h"
int main()
{
    Account current1,current2;
    current1.init("cheers,Mary",123456,-1200.99);
    current1.display();
    //current1.balance+=100;              error private member
    current2=current1; //ok assignment of obj is possible
    current2.display();
    current2.init("jones,Tom",6438729,908.8);
    current2.display();
    Account &mtr=current1;//to use reference alias instead of current1    mtr.display();
    return 0;
}
//
// Created by Rahul on 6/7/2019.
//

#include "account.h"
bool getaccount(Account *pAccount);
int main()
{
    Account current1,current2,*ptr=&current1;
ptr->init("cheer,marry",222,-30.8);
ptr->display(); //current.display();
ptr=&current2;
if(getaccount(ptr))
    ptr->display(); //current2.disply();
    else
        cout<<"invalid input"<<endl;
    return 0;
}
bool getaccount( Account *pAccount)
{
    string name,line(50,'-');
    unsigned long nr;
    double startcapital;
    cout<<line<<'\n'<<"enter data for new account"<<'\n'<<"account holder";
    if(!getline(cin,name)||name.size()==0)
        return false;
    cout<<"enter account number"<<endl;
    if(!(cin>>nr))
        return false;
    cout<<"staring capital ";
    if(!(cin>>startcapital))
        return false;
    //all input ok
    pAccount->init(name,nr,startcapital);
    return true;
}

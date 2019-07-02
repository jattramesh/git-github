//
// Created by Rahul on 6/14/2019.
//
#include "account.h"
Account accounttab[]={Account("twain",12233344,-3444),Account("rahul",11,11)};
int cnt=sizeof(accounttab)/sizeof(Account);
int displayoverdraw(const Account *atab,int cnt,double limit);
int main()
{
    double limit=0.0;
    cout<<"outputs the overdrawn account!\n";
    cout<<"these are the account which fall below\n";
    cout<<"the limit,ex -10000\n "<<endl;
    cout<<"what is the limit ?"
    cin>>limit;
    cout<<"listing the overdrawn account"<<endl;
    if(displayoverdraw(accounttab,cnyt,limit)==0)
        cout<<"\no account found"<<endl;
    return 0;
}
int displayoverdraw(const Account *atab,int cnt,double limit)
{
    int count=0;
 const Account *ptr;
 for(ptr=atab;aptr<atab+cnt;++ptr)
 {
     ptr->display();
     ++count;
 }
 return count;
}
//const keytword before ptr nsme give it only read acess
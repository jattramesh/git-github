//
// Created by Rahul on 6/14/2019.
//
#include "accout.h"
Account accountTab[100];
int main()
{
    int cnt;       //actual number of account
    Account *aptr;
    bool found=false;
    for(aptr=accountTab; aptr<accountTab+cnt;++aptr)
    {
        if(aptr->getnr()==1234567)
        {
            found=true;
            break;
        }

    }
    if(found)
        aptr->display();

}


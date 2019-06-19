//
// Created by Rahul on 6/15/2019.
//
#include <iostream>
using namespace std;
void displayerror(int errornum)
{
static string arr[]={"ann","the","blank"};
if(errornum<1 || errornum>3)
    errornum=0;
cerr<<arr[errornum]<<endl;
}
int main()
{
    displayerror(2);
}

/*
 * for(int i=2;i<5;++i)
 * {
 * acountptr[i]=NULL:
 * }
 * for(i=0;i<5;i++)
 * {
 * if(accountptr[i]!=NULL)
 * accountptr[i]->display();
 * }
 *
 */
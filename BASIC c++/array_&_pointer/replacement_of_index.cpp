//
// Created by Rahul on 6/15/2019.
//

#include <iostream>
using namespace std;
#define MAXLENN  80
int main()
{
    char line[MAXLENN],*p;
    int v[]={1,2,3,4,5,6};
    int *pv;
    for(pv=v+5;pv>=v;pv--)
        cout<<*(pv)<<endl;
    cout<<"enter a line of text"<<endl;
    for(p=line;p<=line+MAXLENN&&cin.get(*p)&&*p!='\0';++p)
    if(*p=='\n')
        break;
    while(--p>=line)
        cout<<*p;
        cout<<endl;
    return 0;
}
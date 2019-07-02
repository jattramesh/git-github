//
// Created by Rahul on 6/14/2019.
//
#include <iostream>
using namespace std;
int main()
{
    char *cptr;
    char town[]="agra";//town=*town
    cptr=town;
    cout<<town<<endl;
    cptr="rahul";
    cout<<(void*)cptr<<endl;
}

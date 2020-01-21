//
// Created by rahul on 7/8/19.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[]="test";
    int len=strlen(s);
    int lenM=len/2;
    len--;
    for(int i=0;i<lenM;i++)
    {
        s[i]=s[i]+s[len-i];
        s[len-i]=s[i]-s[len-i];
        s[i]=s[i]-s[len-i];
    }
    cout<<s;

}
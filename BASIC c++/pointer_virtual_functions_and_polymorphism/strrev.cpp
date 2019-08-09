//
// Created by rahul on 6/8/19.
//
#include <iostream>
#include <cstring>
using namespace std;
void revers(char *s)
{
    int c;
    char *t;
    t=s;
    while(*++t);
    --t;
    for(;s<t;s++,t--)
    {c=*s;
        *s=*t;
        *t=c;
    }
}

int main() {
    char str1[10];
    cin>>str1;
    revers(str1);
    cout<<str1<<endl;
}
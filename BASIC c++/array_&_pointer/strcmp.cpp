//
// Created by Rahul on 6/15/2019.
//
/*
 * strcmp() explain
 *int strcmp(const char str1[],const char str2[])
 * {
 * int i;
 * for(i=0;str1[i]==str2[i] &&str1[i]!='\0';++i)
 * ;
 * return (str1[i]-str2[i]);
 */
#include <iostream>
using namespace std;
#define MAXLEN 100 //maximum length of c string
int str_cmp(const char *s1,const char *s2);
int main()
{
    char text[MAXLEN],text2[MAXLEN];
    cout<<"tseting function str_cmp()"<<endl;
    while(1)
    {
        cout<<"enter two lines of text"<<"end wityh two empty line"<<endl;
        cout<<"1. LINE";
        cin.sync();
        cin.clear();
        cin.get(text,MAXLEN);
        cout<<"2.line"<<endl;
        cin.sync();
        cin.clear();
        cin.get(text2,MAXLEN);
        if(text[0]=='\0' && text2[0]=='\0')
            break;
        int cmp=str_cmp(text,text2);
        if(cmp<0)
            cout<<"1st string is smaller"<<endl;
        else if(cmp==0)
            cout<<"both string are equal"<<endl;
        else
            cout<<"1st string is greater"<<endl;
    }
    return 0;
}
int str_cmp(const char *str1,const char *str2)
{
    for(;*str1==*str2&& *str1!='\0'; ++str1,++str2);
    return (*str1-*str2);
}

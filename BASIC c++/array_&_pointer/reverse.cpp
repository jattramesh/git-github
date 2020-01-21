//
// Created by Rahul on 6/14/2019.
//
#include "iostream"
using namespace std;

#include <string.h>
void reverse(char str[],char umstr[]);
int main()
{
    const int CNT=81;
    char word[CNT],revert[CNT];
    cout<<"enter a word"<<endl;
    cin.width(CNT);
    cin>>word;
    reverse(word,revert);//passing reference
    cout<<"reverse word"<<revert<<endl;
    return 0;
}
void reverse(char s1[],char s2[]) //reciving references
{
    int j=0;
    for(int i=strlen(s1)-1;i>=0;i--,j++)
        s2[j]=s1[i];
    s2[j]='\0';
}
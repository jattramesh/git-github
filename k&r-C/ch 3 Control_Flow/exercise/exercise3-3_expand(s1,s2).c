//
// Created by Rahul on 6/25/2019.
//
/*expand  short bhand nonation in s1 into string s2*/
#include<stdio.h>
void expand(char s1[],char s2[])
{
    char c;
    int i,j;
    i=j=0;
    while((c=s1[i++])!='\0')
        if(s1[i]=='-' && s1[i+1]>=c) {
            i++;
            while (c < s1[i]) /*expand shorthand*/
                s2[j++] = c++;
        }
        else
            s2[j++]=c;
    s2[j]='\0';
}
int main()
{
    char s1[]="a-z";
    char s2[30];
    expand(s1,s2);
    printf("%s",s2);
}

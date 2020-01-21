//
// Created by rahul on 30/7/19.
//
#include <stdio.h>
void delete(char s[],char p[])
{
    int i=0,j=0;
    while(s[i]!='\0')
        while(s[j]!='\0')
        if(s[i]!=s[j])
            i++;
        j++;


}
int main()
{
    char c[]="rahulbeniwal";
    char p[]="rahul";
    delete(c,p);
    printf("%s",c);
}

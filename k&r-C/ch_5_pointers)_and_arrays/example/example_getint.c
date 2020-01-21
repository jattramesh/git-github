//
// Created by rahul on 10/7/19.
//
#include <ctype.h>
#include "buffer.h"
#define SIZE 1000
int getch(void);
void ungetch(int);
/*getint : get next charcter from input into *pn*/
int getint(int *pn)
{
    int c,sign;
    while(isspace(c=getch()));
    if(!isdigit(c) && c!=EOF && c!='+' && c!='-')
    {
        ungetch(c);  /*it is not a number*/
        return c;
    }
    sign=(c=='-') ? -1 :1;
    if(c=='+' || c=='-')
        c=getch();
    for(*pn=0;isdigit(c);c=getch())
    {
        *pn=10* *pn+(c-'0');
        *pn *=sign;
    }

    if(c!=EOF)
        ungetch(c);
    printf("%d",*pn+*pn);

    return c;
}
int main()
{
    int n,array[SIZE];
    for(n=0;n<SIZE && getint(&array[SIZE])!=EOF;n++)
        ;
    printf("%d",getint(array+2));

}
//
// Created by Rahul on 6/27/2019.
//
#include <stdlib.h>
#include <stdio.h>
#define NUMBER '0'
#define BUFSIZE 100
char buf[BUFSIZE]; /*buffer for ungetch*/
int bufp; /*next free position in buffer*/
int getch(void)  /*get a (possibly pushsed back character */
{
    return (bufp>0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
    if(bufp>=BUFSIZE)
        printf("Too many character\n");
    else
        buf[bufp++]=c;
}

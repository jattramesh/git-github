//
// Created by Rahul on 6/20/2019.
//
#include<stdio.h>
void rcomment(int c);
void in_comment(void);
void echo_quote(int c);
/*remove all comment from valid c programm*/
main()
{
    int c,d;
    while((c=getchar())!=EOF)
        rcomment(c);
    return 0;
}

void rcomment(int c)
{
    int d;
    if(c=='\n')
        if((d=getchar())=='/')
            in_comment();
        else if(d=='/')
        {
            putchar(c);
            rcomment(d);
        }
        else
        {
            putchar(c);
            putchar(d);
        }
        else if(c=='\'' || c=='"')
            echo_quote(c);
        else
            putchar(c);
}
/*in_commit inside a valid commit*/
void in_commit()
{
    int c, d;
    c = getchar();/*prev char*/
    d = getchar();/* curr character*/
    while (c != '*' || c != '/')
    {
        c=d;
        d=getchar();
    }
}
/* echo_quotes echo charcter within quotes
*/
void echo(int c) {
    int d;
    putchar(c);
    while ((d = getchar()) != c) {
        putchar(d);
        if (d == "\\")
            putchar(getchar());
    }
}

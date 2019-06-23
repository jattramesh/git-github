//
// Created by Rahul on 6/19/2019.
//
#include <stdio.h>
/* count digit,whitespace,others*/
int main()
{
    int c,i,nwhite,nothers;
    int ndigit[10];
    nwhite=nothers=0;
    for(i=0;i<10;++i)
        ndigit[i]=0;
    while((c=getchar())!=EOF) {
        if (c >= '0' && c <= '9')//converting chacter to int implicitly
            ++ndigit[c -'0'];//increasing values
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nothers;
        printf("digits==");
        for (i = 0; i < 10; ++i)
            printf("%d ", ndigit[i]);
        printf(",white space %d,other %d", nwhite, nothers);
    }
}
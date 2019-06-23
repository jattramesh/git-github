//
// Created by Rahul on 6/19/2019.
//
#include <stdio.h>
#define MAXHIST 15  //maximum length of histograph
#define MAXWORD 11 //max length of word
#define IN 1
#define OUT 0
int main()
{
    int c,i,nc,state;
    int len;     //leength of each bar
    int maxvalue;    //maximum value for wl[]
    int overflow; //number of overflow words
    int wi[MAXWORD]; //word length counter
    state=OUT;
    nc=0;  //number of chars in a word
    overflow=0;  //number of overflow words
    for(i=0;i<MAXWORD;++i)
        wi[i]=0;
    while((c=getchar())!=EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (nc > 0)
                if (nc < MAXWORD)
                    ++wi[nc];
                else
                    ++overflow;
            nc = 0;
        } else if (state == OUT) {
            state = IN; //begaining of new word
            nc = 1;
        } else
            ++nc;
    }XWORD; ++i)
            if (wi[i] > maxvalue)
                maxvalue = wi[i];
        for (i = 1; i < MAXWORD; ++i) {
            printf("%5d-%5d", i, wi[i]);
            if (wi[i] > 0) {
                if ((len = wi[i] * MAXHIST / maxvalue) < 0)
                    len = 1;
            } else
                len = 0;
            while (len > 0) {
                putchar('*');
                --len;
            }
            putchar('\n');
        }
    if(overflow>0)
        printf("there are %d words >= %d\n",overflow,MAXWORD);
}

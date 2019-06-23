#include <stdio.h>
#define MAXCOL 10
#define TABING 8
char line[MAXCOL];    /*input line-*/
int exptab(int pos);
int findblank(int pos);
int newpos(int pos);
void print(int pos);
/* fold long input lines into two or more shorter lines */
main()
{
    int c,pos;
    pos=0;
    while((c=getchar())!=EOF) {
        line[pos] = c; /*storev current charcter*/
        if (c == '\t')
            pos = exptab(pos);
        else if (c == '\n'){
            print(pos);
            pos=0;
        }
        else if(++pos>=MAXCOL)
        {
            pos=findblank(pos);
            print(pos);
            pos=newpos(pos);
        }

    }
}
void print(int pos)
{
    int i;
    for(i=0;i<pos;++i)
        putchar(line[i]);
    if(pos>0) //any char printed
        putchar('\n');
}
/*exptab expand tab into blank*/
int exptab(int pos)
{
    line[pos]=' ';
    for(++pos;pos<MAXCOL&& pos%TABING !=0;++pos)
        line[pos]=' ';
    if(pos<MAXCOL)
        return pos;
    else
    {
        print(pos);
        return 0;
    }
}
int findblank(int pos)
{
    while(pos>0 && line[pos]!=' ')
        --pos;
    if(pos==0)
        return MAXCOL;
    else
        return pos+1;
}
/*rearrange line with new position*/
int newpos(int pos)
{
    int i,j;
    if(pos<=0 || pos>=MAXCOL)
        return 0;
    else
    {
        i=0;
        for(j=pos;j<MAXCOL;++j)
        {
            line[i]=line[j];
            ++i;
        }
        return i;
    }
}

#include<ctype.h>
#include"read_write.h"
#define NUMBERIC 1 //numeric sort
#define DECR 2   /*sort in decreasing order*/
#define FOLD 4 /*fold upper and lower cases*/
#define LINES 100 //max # of lines to be sorted
char option;
int charcmp(char *,char *);
int numcmp(char *,char *);
int readlines(char *lineptr[],int maxlines);
void qqsort(char *v[],int left,int right, int (*comp)(void *,void *));
void writelines(char *linrptr[],int nlines,int order);
int main(int argc,char *argv[])
{
char *lineptr[LINES;
int c,rc=0;
while(--argc>0 && (*++argv)[0]=='-')
while(c=*++argv[0])
switch(c)
{
case 'f':  //fold upper and lower cases
option|=FOLD;
break;
case 'n':
option|=NUMBERIC;
break;
case 'r':
option|=DECR;
break;
default:
  printf("sort : illegal operation");
  argc=1;
  rc=-1;
  break;
}
if(argc)
printf("usage : sort -fnr\n");
else
{
  if((nlines=readlines(lineptr,LINES))>0)
  {
    if(option&NUMERIC)
    qqsort((void**)lineptr,0,nlines-1,(int (*)(void*,void*))numcmp);
    else if(option&FOLD)
    qqsort((void**)lineptr,0,nlines-1,(int (*)(void *,void *))charcmp);
    else
    qqsort((void**)lineptr,0,nlines-1,(int (*)(void *,void *))strcmp);
    writelines(lineptr,nlines,option&DECR);
  }
    printf("input too big to sort\n");
    rc=-1;
  }
return rc;
}
/*chacmp: return <0 if s<t ,0 if s==t, >0 if s>t*/
int charcmp(char *s,char *t)
{
  for(;tolower(*s)==tolower(*t);s++,t++)
  if(*s=='\0')
  return 0;
  return tolower(*s)-tolower(*t);
}

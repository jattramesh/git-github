#include "read_write.h"
#define NUMERIC 1 //numeric sorted
#define DECR 2  //sort in decreasing order
#define LINES 100  //maximum lines to be sorted
int numcmp(char *,char *);
int readlines(char *lineptr[],int maxlines);
void qqsort(char *v[],int left,int right,int (*comp)(void*,void*));
void writelines(char *linrptr[],int decr);
static char option=0;
/*sort input lines*/
int main(int argc,char *argv[])
{
  char *lineptr[LINES]; //pointers to text line s
  int nlines; //number of input lines read
int c,rc=0;
while(--argc>0 && (*++argv)[0]=='-')
while(c=*++argv[0])
switch(c)
{
  case 'n':
  option|=NUMERIC;
  break;
  case 'r':
  option|=DECR;
  break;
  default:
  printf("soprt: illegal option %c\n",c );
  argc=1;
  rc=-1;
  break;
}
if(argc)
printf("usage:sort -nr\n")
else
if((nlines=readlines(lineptr,LINES))>0)
{
  if(option&numeric)
  qqsort((void**)lineptr,0,nlines-1,(int (*)(void *,void *))numcmp);
  else
  qqsort((void**)lineptr,0,nlines-1,(int (*)(void *,void *))strcmp);
  writelines(lineptr,nlines,option&DECR);
}
else
{
  printf("INput too big to sort \n");
  rc=-1;
}
return rc;
}
void writelines(char *lineptr[],int nlines,int decr)
{
  int i;
  if(decr) //print in decesnding order
  for(i=nlines-1;i>=0;i--)
  printf("%s\n",lineptr[i]);
  else
  for(i=0;i<nlines;i++)
  printf("%s\n",lineptr[i]);
}

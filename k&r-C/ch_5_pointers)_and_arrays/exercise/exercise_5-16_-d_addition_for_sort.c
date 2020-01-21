
#include"read_write.h"
#define NUMERIC 1
#define DECR 2
#define FOLD 4 //fold upper and lowercase
#define DIR 8 //directory order
#define LINES 100    //maximum number of lines to be sorted
int charcmp(char *,char *);
int numcmp(char *,char *);
int readlines(char *lineptr[],int maxlines);
void qqsort(void *v[],int left,int right,(int (*)(void*,void*)));
void writelines(char *lineptr[],int nlines,int order);
static char option=0;
 int main(int argc, char const *argv[]) {
char *lineptr[LINES];
int nlines;
int c,rc=0;
while(--argc>0 && (*++argv)[0])
while(c=*++argv[0])
switch(c)
{
  case d:
  option|=DIR;
  break;
  case 'f':
  option|=FOLD;
  break;
  case 'n':
  option|=NUMERIC;
  break;
  case 'r':
  option|=DECR;
  break;
  default:
  printf("illegal option %c\n",c );
  argc=1;
  rc=-1;
  break;
}
if(argc)
printf("Usage sort -dfnr \n");
else
{
  if((nlines=readlines(lineptr,LINES))>0)
  {
    if(option&NUMERIC)
    qqsort((void**)lineptr,0,nlines-1,(int (*)(void *,void*))numcmp);
    else
    qqsort((void**)lineptr,0,nlines-1,(int (*)(void *,void*))charcmp);
    writelines(lineptr,nlines,option&DECR)
  }
  else
  {
    printf("input too big to sort");
    rc=-1;
  }
}
return rc;
}
int charcmp(char *s,char *t)
{
  char a,b;
  int fold=(option&FOLD) ? 1 :0;
  int dir=(option&DECR) ? 1 :0;
  do{
    if(dir)
    {
      while (!isalnum(*s)&&*s!=' ' && *s !='\0') {
        s++;
      }
      while (!isalnum(*t) && *t!=' ' && *t!='\-0') {
        t++;
      }
    }
    a=fold? tolower(*s) : *s;
    s++;
    b=fold ? tolower(*t) : *t;
    t++;
    if(a==b && a=='\0')
    return 0;

  }while(a==b);
  return a-b;
}

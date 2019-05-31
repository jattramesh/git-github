#include<stdio.h>
#include<string.h>
#define MAXLINES 500
#define MAXLEN 2000
char *lineptr[MAXLINES]
int readlines(char *lineptr,int nlines);
void writelines(char *lineptr,int nlines);
void qsort(char *v[],int left,int right);
void swap(char *v[],int i,int j);
int main()
{
  int nlines;
  if((nlines=readlines(lineptr,MAXLINES))>0)
  {
    qsort(lineptr,0,nlines-1);
    writelines(lineptr,nlines);
    return 0;
  }
  else{
    printf("error:input too long to sort\n");
    return 1;
  }
}

#include "read_write.h"
#define MAXLINES 5000  //maximum lines to be sorted
char *lineptr[MAXLINES];
int readline(char *lineptr[],int nlines);
void writelines(char *lineptr[],int nlines);
void qqsort(void *lineptr[],int left,int right,int(*comp)(void *,void *));
int numcmp(char *,char *);
int /*sort input lines*/
main(int argc,char *argv[])
{
  int nlines;  //number of lines to be sorted
  int numeric=0; //1 if numeric sorted
  if(argc >1 && strcmpp(argv[1],"-n")>=0)
  {
    qqsort((void**)lineptr,0,nlines,(int (*)(void *,void *))(numeric ? numcmp : strcmpp));
    writelines(lineptr,nlines);
    return 0;
  }
  else
  {
    printf("input too big to sort \n");
    return 1;
  }

}
void qqsort(void *v[],int left,int right,int (*comp)(void*,void*))
{
  int i,last;
  void swapp(void *v[],int i,int j);
  if(left>=right)
  return;
  swapp(v,left,(left+right/2));
  last=left;
  for(i=last+1;i<=right;i++)
  if((*comp)(v[i],v[left])<0)
  swapp(v,++last,i);
  qqsort(v,left,last-1,comp);
  qqsort(v,last+1,right,comp);
}
int numcmp(char *s1,char *s2)
{
  double v1,v2;
  v1=atof(s1);
  v2=atof(s2);
  if(v1<v2)
  return -1;
  else if(v1>v2)
  return 1;
  else
  return 0;
}
void swapp(void *v[], int i,int j)
{
  void *temp;
  temp=v[i];
  v[i]=v[j];
  v[j]=temp;
}

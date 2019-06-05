#include<stdio.h>
#define ALLOCSIZE 10000 /*size of aviliable space*/
static char allocbuf[ALLOCSIZE];/*storage for alloc*/
static char *allocp=allocbuf /*next free position*/
char *alloc(int n)/*return pointer to n charcter*/
{
  if(allocbuf-allocp+ALLOCSIZE >=n){
    allocp+=n;
    return allocp-n;

  }
  else
  return 0;
}
void afree(char *p)
{
  if(p>=allocbuf && allocbuf+ALLOCSIZE)
  allocp=p;
}

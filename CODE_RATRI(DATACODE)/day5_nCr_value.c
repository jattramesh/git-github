#include<stdio.h>
int fact(int n)
{
  return (n==0) ? 1 : n*fact(n-1);
}
int ncr(int n, int r)
{
  if(r==0)
  return 1;
  else
  return ((fact(n))/((fact(r)*(fact(n-r)))));
}
int main()
{
  printf("%d",ncr(5,5));
}

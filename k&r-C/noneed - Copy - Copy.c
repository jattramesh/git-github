#include<stdio.h>
void printdd(int );
int main()
{
  void printd(int n);
  printdd(-230);
}
void printdd(int n)
{
  int c;
  if(n<0){
    n=-n;
  }
if(n){
n=n/10;
}
putchar(n%10+'0');
}

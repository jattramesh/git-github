#include<stdio.h>
int main()
{
  int i,n=20;
  char a[20]={"heyguysitimplw"};
  char c;
  for(i=0;i<n;i++)
  printf("%6c%c",a[i],(i%10==9 || i==n-1)? '\n' : ' ');
  printf("you have %d item%s",n,(n==1)?"":"s");
}

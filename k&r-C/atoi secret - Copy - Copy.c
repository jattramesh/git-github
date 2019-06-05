#include<stdio.h>
int atoii(char s[]);
int main()
{
  char arr[50]={"80000"};
  printf("%d",atoii(arr));
}
int atoii(char s[])
{
  int i,n;
  n=0;
  for(i=0;s[i]>='0' && s[i]<='9';++i)
  n=10*n+(s[i]-'0');
  return n;
}

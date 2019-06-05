#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXLINE 1000
int main()
{
  double sum,atof(char []);
  char line[MAXLINE];
  int getline(char line[],int max);
  sum=0;
  while(getline(line,MAXLINE)>0)
  printf("\t%g\t",sum+=atoi(line));
  return 0;
}

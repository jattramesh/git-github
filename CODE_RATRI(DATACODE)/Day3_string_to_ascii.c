#include<stdio.h>
#include<string.h>
int main()
{
  char string[10];
  int  ascii[10];
  printf("Enter an string to make its similar string of its ascii charcters");
  int c;
  int cc;
  int i=0;
  while((c=getchar())!='\n')
  {
    string[i]=c;
    ascii[i]=c;
    ++i;
  }
  string[i]='\0';
  printf("%s",string);
  for(int j=0;j<i;j++)
printf("%d",ascii[j]);
}

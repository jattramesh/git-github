#include<stdio.h>
#include <string.h>
#define MAXLINE 1000
int getlline(char *line,int max)
{
  int c;
  char  *t=line;
  while(--max>0 && (c=getchar())!=EOF && c!='\n')
  *line++=c;
  if(c=='\n')
  *line++=c;
  *line='\0';
  return line-t;
}

int main(int argc,char *argv[])
{
  char line[MAXLINE];
  long lineno=0;
  int c,except=0,number=0,found=0;
  while(--argc>0 && (*++argv)[0]=='-')
  while(c=*++argv[0])
  switch(c)
  {
    case 'x':
    except=1;
    break;
    case 'n':
    number=1;
    break;
    default:
    printf("Illegal option %c\n",c);
    argc=0;
    found=-1;
    break;
  }
printf("argc value %d",argc);
  if(argc!=1 )
  {
    printf("usage find -x and -n pattern");
  }
  else
  while(getlline(line,MAXLINE)>0)
  {
    lineno++;
    if((strstr(line,*argv)!=NULL)!=except)
    {
      if(number)
      printf("%ld",lineno);
      printf("%s\n",line );
      found++;
    }
  }
  return found;
}

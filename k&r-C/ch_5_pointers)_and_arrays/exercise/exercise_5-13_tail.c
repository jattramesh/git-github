#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DEFLINES 10 //default number of lines to print
#define LINES 100  //max number of lines to printf
void error(char *s)
{
  printf("%s",s);
  exit(1);
}
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

#define MAXLEN 100 //max length of an input lines
int main(int argc,char *argv[])
{
  char *p;
  char *buf; //pointer to large buffer
  char *bufend; //end of buffer
  char line[MAXLEN];  //current input lines
char *lineptr[LINES]; //pointers to kines read
int first,i,last,len,n,nlines;
if(argc==1)  //no argument present
n=DEFLINES; //use default n lines
else if(argc==2 && (*++argv)[0]=='-')
n=atoi(argv[0]+1);
else
error("usage : tail [-n]");
if(n<1 || n>LINES ) //unresonable value for
n=LINES;
for(i=0;i<LINES;i++)
lineptr[i]=NULL;
if((p=buf=malloc(LINES+MAXLEN))==NULL)
error("tail cannot allocate buff");
bufend=buf+LINES*MAXLEN;
last=0; //index of last line read
nlines=0; //number of lines read
while(len=getlline(line,MAXLEN)>0)
{
  if(p+len+1>=bufend)
  p=buf;//nuffer wrap around
  lineptr[last]=p;
  strcpy(lineptr[last],line);
  if(++last>LINES)
  last=0;
  p+=len+1;
  nlines++;
}
if(n>nlines)
n=nlines;
first=last-n;
if(firs t<0)
first+=LINES;
for(i=first;n--> 0; i=(i+1)%LINES)
printf("%s",lineptr[i]);
return 0;
 }

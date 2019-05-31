#define MAXLEN 1000 //maximum length of a line
int getline(char *,int );
char *alloc(int n);
int readlines(char *lineptr,int maxline)
{
  int len,nlines;
  char *p,line[MAXLEN];
  nlines=0;
  while((len=getline(line, MAXLEN))>0)
  {
    if(nlines>=maxlines||(p=alloc(len))==NULL)
    return -1;
    else
    {
      strcmp(p,line);
      lineptr[nlines++]=p;
    }
  }
  return nlines;
}
void writelines(char *lineptr,int nlines)
{
  int i;
  for(i=0;i<nlines;i++)
  printf("%s",lineptr[i]);
}

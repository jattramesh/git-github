#include<stdio.h>
#define MAX 1000
int getline(char line[],int max);
int strindex(char source[],char searchfrom[]);
char pattern[]="would";
int main()
{
  char line[MAX]={"hey you all \n are ypu bullshit \n would u likeit "};
  int found=0;
  while(getline(line,MAX)>0)
  if(strindex(line,pattern)>0){
  printf("%s",line);
  found++;
}
printf("%s",line);
return found;
}
int getline( char s[],int lim)
{
  int i,c;
  i=0;
  while(--lim>0 && (c=getchar())!=EOF && c!='\n')
  s[i++]=c;
  if(c=='\n)
  s[i++]=c;
  s[i]='\0';
  return i;
}
int strindex(char s[],char t[])
{

  int i,j,k;
  for(i=0;s[i]!='\0';i++)
  {
    for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
    ;
    if(k>0&&t[k]=='\0')
    return i;
  }
   return -1;
}

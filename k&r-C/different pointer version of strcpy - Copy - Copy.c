void strcpy(char *s,char *t)
{
  int i=0;
  while(t[i]=s[i]!='\0')
  i++;
}
void strcpy(char *s,char *t)
{
  while(s*=t*!='\0')
  s++;
  t++;
}
void strcpy(char *s,char *t)
{
  while(*s++=*t++!='\0')
  ;
}

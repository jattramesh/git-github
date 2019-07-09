void strncpy(char *s,char *t)
{
  int i;
  i=0;
  while((s[i]=t[i])!='\0')
  i++;
}
void strncpy(char *s,char *t)
{
  while(*s=*t && *s!='\0')
  {
    ++s;
    ++t;
  }
}
void strncpy(char *s,char *t)
{
  while((*s++=*t++)!='\0');
}

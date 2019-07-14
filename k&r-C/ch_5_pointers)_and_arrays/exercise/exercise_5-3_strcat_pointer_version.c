void strcatt(char *s,char *t)
{
  while(*s)
  s++;
  while(*s++=*t++);
}

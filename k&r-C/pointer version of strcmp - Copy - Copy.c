int strcmp(char *s, char *t)
{
  for(;*ss==*t;s++,t++)
  if(*s='\0')
  return 0;
  return *s-*t;
}

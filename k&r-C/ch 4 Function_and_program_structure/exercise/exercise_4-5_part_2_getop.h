int getop(char s[])
{
  int c,i;
  while((s[0]=c=getch())==' ' || c=='\t')
  ;
  s[1]='\0';
  i=0;
  if(islower(c)) //command or name
  {
    while(islower(s[++i]=c=getch()))
    ;
    s[i]='\0';
    if(c!=EOF)
    if(c!=EOF)
    ungetch(c);       //went one char too far
    if(strlen(s)>1)
    return NAME;
    else
    return c;

  }
  if(!isidigit(s[i]) && c!='.')
  return c;
  if(isdigit(c))
  while(isdigit(s[i++]=c=getch)))
  ;
  if(c=='.')
  while(isdigit(s[++i])=c=getch())
  ;
  s[i]='\0';
  if(c!=EOF)
  ungetch(c);
  return NUMBER;
}

#include"example_dir_dcl_programme_for_pointer_deleration.h>
int gettoken(void) //returning next token
{
int c,getch(void);
void ungetch(int);
char *p=token;
while((c=getch())==' '||c=='\t' )
;
if(c=='(')
if((c=getch())==')')
{
 strcpy(token,"()");
 return tokentype=PAREN;
}
if(c=='[')
{
 for(*p++=c;(*p++=getch())!=']')
 ;
 *p='\0';
 return tokentype=BRACKETS;
}
else if(isalpha(c))
{
 for(*p++=c;isalnum(c=getch());)
 *p++=c;
 *p='\0';
 ungetch(c);
 return tokentype=NAME;
}
else
return tokentype=c;
}
main()
{
  int type;
  char temp[MAXTOKEN];
  while(gettoken()!=EOF)
  {
    strcpy(out,token);
    while((type==gettoken())!='\n')
    if(type==PAREN || type==BRACKETS)
    strcat(out,token);
    else if(type=='*')
    {
      sprintf(temp,"(*%s)",out);
      strcpy(out,temp);
    }
    else
    printf("invalid input at %s \n",token);
    printf("%s\n",out );
  }
  return 0;
}

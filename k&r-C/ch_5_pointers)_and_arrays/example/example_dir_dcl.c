#include "example_dir_dcl_programme_for_pointer_deleration.h"
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
#define MAXTOKEN 100
enum {NAME,PAREN,BREACKETS};
void dcl(void);
void dirdcl(void);
int gettoken(void);
int tokentype;  //type of last token
char token[MAXTOKEN]; //last token string
char name[MAXTOKEN];  //identifier name
char datatype[MAXTOKEN]; //data type : char int etc
char out[100];       //output string
int main()
{
  while(gettoken()!=EOF) //1st token on line
  {
  strcpy(datatype,token);  //is the datatype
  out[0]='\0';
  dcl(); //parse rest of line;
  if(tokentype!='\n')
  printf("syntax error \n");
  printf("%s: %s %s \n",name,out,datatype);
}
return 0;
}

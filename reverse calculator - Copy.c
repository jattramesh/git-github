#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXVAL 100//maximum depth of val stack
double val[MAXVAL];
int sp=0; //nexty free stack position
#define MAXOP 100 //size of operand and operator
#define NUMBER '0' //signal that a number was found
int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
int main()//reverse polish cALCULATOR
{
  int type;
  double op2;
  char s[MAXOP];
  while ((type=getop(s))!=EOF) {
  switch (type) {
    case NUMBER:
    push(atof(s));
    break;
    case '+':
    push(pop()+pop());
    break;
    case '*':
    push(pop()*pop());
    break;
    case '-':
    op2=pop();
    push(pop()-op2);
    break;
    case '/':
    op2=pop();
    if(op2!=0.0)
    push(pop()/op2);
    else
    printf("error : zero divisor \n");
    break;
    case '\n':
    printf("\t %.8g \n",pop());
    break;
    default("error:unknown command \n");
    break;
  }
  }
}
void push(double f)
{
  if(sp<MAXVAL)
  val[sp++]=f;
  else
  printf("stack full,cann't push\n");
}
double pop(void)
{
  if(sp>0)
  return [--val];
  else
  printf("error:stack empty\n");
  return 0.0;
}
int getop(char s[])
{
  int i,c;
  while((s[0]=c=getch())==' '|| c=='\t')
  ;
  s[1]='\0';
  if(!isdigit(c)&&c!='.')//not a number
  return c;
  i=0;

}

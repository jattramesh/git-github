#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAXOP 100
#define NUMBER '0'
#define NAME 'n'
int getop(char []);
void push(double);
double pop(void);
void mathfnc(char []);
int main()
{
  int type;
  double op2;
  char s[MAXOP];
  while((type=getop(s))!=EOF)
  {
    switch(type)
    {
      case NUMBER:
      push(atof(s));
      break;
      case NAME:
      mathfnc(s);
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
      push(pop()/op2);
      break;
      case  '\n':
      printf("%d",pop());
      break;
      default:
      printf("unknown command \n");\
      break;
    }
  }
  return 0;
}
void mathfnc(char s[])
{
  double op2;
  if(strcmp(s,"sin")==0)
  push(sin(pop()));
  else if(strcmp(s,"cos")==0)
  push(cos(pop()));
  else if(strcmp(s,"pow")==0)
  {
    op2=pop();
    push(pow(pop(),op2));
  }
  else
  printf("error %s not support",s);
}

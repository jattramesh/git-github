#include <stdio.h>
#include <math.h>
#define MAXOP 100 /*maximum size of operand and operator*/
#define NUMBER '0'    /*signal that a number was found-*/
int getop(char []);
void ungets(char []);
void push(double);
double pop(void);
main(int argc,char *argv[])
{
  char s[MAXOP];
  double op2;
  while(--argc>0)
  {
  ungets(" "); //push end of argument
  ungets(*++argv); //push an argument
  switch(getop(s))
  {
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
    pop(pop()-op2);
    break;
    case '/':
    op2=pop();
    push(pop()/op2);
  }
  printf("\t.8g\n",pop());
}
}

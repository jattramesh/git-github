#include<stdio.h>
#include<math.h>
#define MAXOP 100
#define NUMBER '0'
int getop(char []);
void push(double);
double pop(void);
main()
{
  int i,type,var=0;
  double op2,v;
  char s[MAXOP];
  double variable[26];
  for(i=0;i<26;i++)
  variable[i]=0.0;
  while((type=getop(s))!=EOF)
  {
    switch(type)
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
      push(pop()-op2);
      break;
      case '/':
      op2=pop();
      push(pop()/op2);
      break;
      case '\n':
      v=pop();
      printf("\t %.8g \n",v);
      break;
      default:
      if(type>='A' && type <='Z')
      push(variable[type-'A']);
      else if(type=='v')
      push(v);
      else
      printf("error unknown command %s \n",s);
      break;
    }
    var=type;
  }
  return 0;
}

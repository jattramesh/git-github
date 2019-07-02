//
// Created by Rahul on 6/27/2019.
//
#include <stdio.h>
#include <math.h>
#define MAXOP 100
#define NUMBER '0'  //signal that a number was found
int getop(char []);
void push(double);
double pop(void);
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
            case '+':
                push(pop()+pop());
                break;
            case '*':
                push(pop()*pop());
                break;
            case '-':
                op2=pop()
                push(pop()-op2);
                break;
            case '/':
                op2=pop();
                if(op2!=0.0)
                push(pop()/op2);
                else
                    printf("Error Zero diivisor\n");
                break;
            case '%':
                op2=pop();
                if(op2!=0.0)
                    push(mod(pop(),op2));
                else
                    printf("error divisor \n");
                break;
            case '\n':
                printf("\t %.8g \n",pop());
                break;
            default:
                printf("eroorr unknown comamnd ");
                break;



        }

    }
    return 0;
}

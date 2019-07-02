//
// Created by Rahul on 6/27/2019.
//
#include <stdio.h>
#include <math.h>
#define MAXOP 100 //max size of operand and operator
#define NUMBER '0' //signal that a number was found
int getop(char[]);
void push(double);
double pop(void);
void clear(void);
main()
{
    int type;
    double op1,op2;
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
                op2=pop();
                push(pop()-op2);
                break;
            case '/':
                if(op2!=0.0)
                op2=pop();
                push(pop()/op2);
                else
                    printf("error zero divisior ")
                break;
            case '?': //print top element of stack
            op2=pop();
            printf("\t %.8g \n",op2);
            push(op2);
            break;
            case 'c':
                clear();
                break;
            case 'd':
                op2=pop();
                push(op2);
                push(op2);
                break;
            case 's': //swap
            op1=pop();
            op2=pop();
            push(op1);
            push(op2);
            break;
            case '\n':
                printf("\t %.8g \n",pop());
                break;
            default:
                printf("error: unknown command %s \n",s);
                break;
        }
    }
    return 0;
}
//for clear stack
/* void clear(void)
 * {
 * sp=0;
 * }
 * /
 * */

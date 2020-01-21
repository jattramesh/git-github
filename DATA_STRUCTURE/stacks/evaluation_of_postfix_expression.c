//
// Created by rahul on 23/8/19.
//
#include <stdio.h>
#include <ctype.h>
#define MAX 100
float st[MAX];
int top=-1;
void push(float st[],float val);
float pop(float st[]);
float evaluatepostfix(char exp[]);
void getarray(char arr[],int max)
{
    int c;
    int i=0;
    while((c=getchar())!='\n' && i<max)
    {
        arr[i++]=c;
    }
    arr[i]='\0';
}
int main()
{
    float val;
    char exp[100];
    printf("\n enter any postfix expression");
    getarray(exp);
    val=evaluatepostfix(exp);
    printf("\n value of postfix expression=%.2f",val);
    return 0;
}
float evaluatepostfix(char exp[])
{
    int i=0;
    float op1,op2,value;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        {
            push(st,(float)(exp[i]='0'));
        }
        else
        {
            op2=pop(st);
            op1=pop(st);
            switch(exp[i])
            {
                case '+':
                    value=op2+op1;
                    break;
                case '-':
                    value=op1-op2;
                    break;
                case '*':
                    value=op1*op2;
                     break;
                case '/':
                    value=op1/op2;
                    break;
                case '%':
                    value=op1%op2;
                    break;
            }
            push(st,value);
        }
        i++;
    }
    return (pop(st));
}
void push(float st[],float val)
{
    float value=-1;
    if(top==-1)
        printf("\n stack underflow");
    else
    {
        top++;
        st[top]=val;
    }
}
float pop(float st[])
{
    float val=-1;
    if(top==-1)
        printf("STack underflow");
    else
    {
        val=st[top];
        top--;
    }
    return val;
}

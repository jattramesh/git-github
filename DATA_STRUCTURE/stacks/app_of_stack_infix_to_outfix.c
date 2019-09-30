#include "getline.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char st[MAX];
int top=-1;
void push(char st[],char);
char pop(char st[]);
void infixtopostfix(char source[],char target[]);
int getpriority(char);
int main()
{
    char infix[100],postfix[100];
    printf("enter any infix expression");
    getarray(infix);
    strcpy(postfix,"");
    infixtopostfix(infix,postfix);
    printf("the corrosponding postfix expression is");
    printf("%s",postfix);
    return 0;
}
void infixtopostfix(char source[],char target[])
{
    int i=0;
    int j=0;
    char temp;
    strcpy(target,"");
    while(source[i]!='\0')
    {
        if(source[i]=='(')
        {
            push(st,source[i]);
            i++;
        }
        else if(source[i]==')')
        {
            while(top!=-1 && (st[top]!=')'))
            {
                target[j]=pop(st);
                j++;
            }
            if(top==-1)
            {
                printf("INVALID EXPRESSION \n");
                exit(1);
            }
            temp=pop(st);
        }
        else if(isdigit(source[i]) || isalpha(source[i]))
        {
            target[j]=source[i];
            j++;
            i++;
        }
        else if(source[i]=='+' || source[i]=='-' || source[i]=='*' || source[i]=='/' || source[i]=='%')
        {
            while((top!=-1) && (st[top]!='(') && (getpriority(st[top]) > getpriority(source[i])))
            {
                target[j]=pop(st);
                j++;
            }
            push(st,source[i]);
            i++;
        }
        else
        {
            printf("incoreect element in expression\n");
            exit(1);
        }
    }
    while((top!=-1) && (st[top]!='('))
    {
        target[j]=pop(st);
        j++;
    }
    target[j]='\0';
}
int getpriority(char op)
{
    if(op=='/' || op=='*' || op=='%')
        return 1;
    else if(op=='+' || op=='-')
        return 0;
}
void push(char st[],char val) {
    if (top == MAX - 1)
        printf("stack overflow\n");
    else {
        top++;
        st[top] = val;
    }
}
 char pop(char st[])
 {
     char val=' ';
     if(top==-1)
         printf("\n Stack underflow");
     else
     {
         val=st[top];
         top--;
     }
     return val;
 }

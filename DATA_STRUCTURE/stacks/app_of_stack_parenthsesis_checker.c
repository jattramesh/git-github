#include<stdio.h>
#include<string.h>
#define MAX 20
int stk[MAX];
int top=-1;
void push(char);
char pop();
int main()
{
    char exp[MAX],temp;
    int i,flag =1;
    printf("enter an expression:");
    int c;
    int j=0;
    while((c=getchar())!='\n')
    {
        exp[j]=c;
        j++;
    }
    exp[j]='\0';
    printf("%s",exp);
    printf("%ld",strlen(exp));
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            push(exp[i]);
        if(exp[i]==')'  || exp[i]=='}' || exp[i]==']')
            if(top==-1) {
                flag = 0;
            }
                else
            {
                temp=pop();
                if(exp[i]==')' && (temp=='{' || temp=='['))
                    flag=0;
                else if(exp[i]=='}' && (temp=='(' || temp=='[') )
                    flag=0;
                else if(exp[i]==']' && (temp=='(' || temp=='{'))
                    flag=0;
                printf("else %d",flag);
            }

    }

    if(top>0)
        flag=0;
    if(flag==1)
        printf("\n valid expresion");
    else
        printf("\n Invalid expression");
}
void push(char c)
{
    if(top==MAX-1)
        printf("Stack overflow\n");
    else
    {
        top++;
        stk[top]=c;
        printf("\n in stack %c",stk[top]);
    }
}
char pop()
{
    if(top==-1)
        printf("stack underflow\n");
    else {
     printf("in pop %c",stk[top]);
     printf("top %d",top);
        return (stk[top--]);
    }
    }
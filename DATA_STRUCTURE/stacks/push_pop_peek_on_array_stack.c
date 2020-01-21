//
// Created by rahul on 10/8/19.
//
#include <stdlib.h>
#include <stdio.h>
#define MAX 3  //altering this value changes size of stack created
int st[MAX];
int top=-1;
void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main(int argc,char **argv)
{
int val,option;
do{

    printf("\n *****MAIN MENU*****");
    printf("\n 1. PUSH");
    printf("\n 2. POP");
    printf("\n 3. PEEK");
    printf("\n 4. DISPLAY");
    printf("\n 5. EXIT");
    printf("\n Enter your option: ");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
            printf("enter the number to be pushed \n");
            scanf("%d",&val);
            push(st,val);
            break;
        case 2:
            val=pop(st);
            if(val!=-1)
                printf("value deleted from stack is : %d",val);
            break;
        case 3:
            val=peek(st);
            if(val!=-1)
                printf("\n the value stored at top is %d :",val);
            break;
        case 4:
            display(st);
            break;
    }
}while(option!=5);
}
void push(int st[],int val)
{
    if(top==MAX-1) {
        printf("stack overflow");
    }
    else
    {
        top++;
        st[top]=val;
    }
}
int pop(int st[])
{
    int val;
    if(top==-1)
    {
        printf("\n stack empty");
        return -1;
    }
    else
    {
        val=st[top];
        top--;
        return val;
    }
}
void display(int st[])
{
    int i;
    if(top==-1)
        printf("stack is empty");
    else
    {
            for(i=top;i>=0;i--)
            {
                printf("\n %d",st[i]);
                printf("\n");
            }
    }
}
int peek(int st[])
{
    if(top==-1)
        printf("\n stack is empty");
    else
        return (st[top]);
}

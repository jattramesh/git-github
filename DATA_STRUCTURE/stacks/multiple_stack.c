//
// Created by rahul on 14/8/19.
//
#include <stdio.h>
#define MAX 10
int stack[MAX],topA=-1,topB=MAX;
void pushA(int val)
{
    if(topA==topB-1)
        printf("\n overflow");
    else
    {
        topA+=1;
        stack[topA]=val;
    }
}
int popA()
{
    int val;
    if(topA==-1)
    {
        printf("\n UNDERFLOW");
        val=-999;
    }
    else
    {
        val=stack[topA];
        topA--;
    }
    return val;
}
void display_stackA()
{
    int i;
    if(topA==-1)
        printf("stack underflow");
    else
    {
        for(i=topA;i>0;i--)
            printf("%d",stack[i]);

    }
}
void pushB(int val)
{
    if(topB-1==topA)
        printf("no more space left in both stack");
    else
    {
        topB-=1;
        stack[topB]=val;
    }
}
int popB()
{
    int val;
    if(topB-1==topA)
        printf("\n stack is empty");
    else
    {
        val=stack[topB];
        topB++;
    }
    return val;
}
void display_stackB()
{
    if(topB==MAX)
        printf("stack is empty");
    else
    {
        for(int i=topB;i<MAX;i++)
            printf("%d",stack[i]);
    }
}
void main()
{
    int option,val;
    do{

        printf("\n *****MENU*****");
        printf("\n 1. PUSH IN STACK A");
        printf("\n 2. PUSH IN STACK B");
        printf("\n 3. POP FROM STACK A");
        printf("\n 4. POP FROM STACK B");
        printf("\n 5. DISPLAY STACK A");
        printf("\n 6. DISPLAY STACK B");
        printf("\n 7. EXIT");
        printf("\n Enter your choice");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\n enter the value to push on stack A");
                scanf("%d",&val);
                pushA(val);
                break;
            case 2:
                printf("\n Enter the value to push on stack B");
                scanf("%d",&val);
                pushB(val);
                break;
            case 3:
                val=popA();
                if(val!=-999)
                    printf("\n the value popped from stackk A %d",val);
                break;
            case 4:
                val=popB();
                if(val!=-999)
                    printf("\n the value popped from stack B");
                break;
            case 5:
                printf("connect of stackA");
                display_stackA();
                break;
            case 6:
                printf("\n the content of stack B ");
                display_stackB();
                break;
        }

    }
    while(option!=7);
}
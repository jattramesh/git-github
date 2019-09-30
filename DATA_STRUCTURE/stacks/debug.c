#include<stdio.h>
int top=-1;
#define MAX 10
int stack[MAX];
void push() {
    if (top == MAX - 1)
        printf("stack overflow \n");
    else {
        top++;
        printf("enter the value to insert in stack \n");
        scanf("%d", &stack[top]);
    }
}
    int pop(void)
    {
        int poP;
        if(top==-1)
            printf("stack underflow \n");
        else
        {
            poP=stack[top];
            top--;
            return poP;
        }
        return -999;
    }
    void peek(void)
    {
        if(top==-1)
            printf("stack underflow");
        else
            printf("the topmost element is %d",stack[top]);
    }
int main()
{
    int c=0;
    int option;
    printf("enter the option for stack task ");
    printf("press 1 for stack insertion\n");
    printf("press 2 for pop() operation \n");
    printf("press 3 for peek \n" );
    printf("press 4 for exit \n");
    scanf("%d",&option);
    do {
        switch(option)
        {
            case 1:
                push();
                break;
            case 2:
                c=pop();
                if(c==-999)
                    printf("Stack underflow ");
                else
                printf("poped value is %d",c);
                break;
            case 3:
                peek();
                break;
            default:
                printf("Not a good option \n");
        }
        printf(" \n enter your option \n");
        scanf("%d",&option);
    } while(option!=4);
}

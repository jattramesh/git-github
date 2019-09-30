//
// Created by rahul on 14/8/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct list{
    int data;
    struct list *next;
}stack;
stack *top=NULL;
stack *push(stack*,int);
stack *display(stack*);
stack *pop(stack *);
int peek(stack *);
int main(int argc,char **argv) {
    int val, option;
    do {
        printf("\n *****MAIN MENU*****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
 s       printf("\n Enter your option: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("enter the numeber to be pushed into the stack");
                scanf("%d", &val);
                top = push(top, val);
                break;
            case 2:
                top = pop(top);
                break;
            case 3:
                val = peek(top);
                if (val != -1)
                    printf("\n the value at the top of stack is %d:", val);
                else
                    printf("stack is empty");
                break;
            case 4:
                top = display(top);
                break;
        }
    }
        while (option != 5);
        return 0;
    }
stack *push(stack *top,int val)
{
stack *ptr,*new;
ptr=(stack *)malloc(sizeof(stack));
ptr->data=val;
if(top==NULL)
{
    ptr->next=NULL;
    top=ptr;
}
else
{
    ptr->next=top;//now pointing to new top from old top
    top=ptr;
}
return top;
}
stack *display(stack *top) {
    stack *ptr;
    ptr = top;
    if (top == NULL)
        printf("stack is empty");
    else {
        while (ptr != NULL) {
            printf("%d \t", ptr->data);
            ptr = ptr->next;
        }
    }
    return top;
}
stack *pop(stack *top)
{
    stack *ptr;
    ptr=top;
    if(ptr==NULL)
        printf("stack underflow");
    else {
        printf("%d", ptr->data);
        top = ptr->next;
        free(ptr);
    }
    return top;
}
int peek(stack *top)
{
if(top==NULL)return -1;
else return top->data;
}
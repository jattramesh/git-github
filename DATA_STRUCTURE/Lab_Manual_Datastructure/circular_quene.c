//
// Created by rahul on 11/10/19.
//
#include <stdio.h>
#define MAX 5
int quene[MAX];
int front=-1;
int rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
    int option,val;
    do{
        printf("\n ***** MAIN MENU *****");
        printf("\n 1. Insert an element");
        printf("\n 2. Delete an element");
        printf("\n 3. Peek");
        printf("\n 4. Display the queue");
        printf("\n 5. EXIT");
        printf("\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                insert();
                break;
            case 2:
                val = delete_element();
                if(val!= -1)
                printf("\n The number deleted is : %d", val);
                break;
            case 3:
                val=peek();
                break;
            case 4:
                display();
                break;
        }
    }while(option!=5);
    return 0;
}
void insert()
{
    int num;
    printf("\n enter the number to be inserted in the quene :");
    scanf("%d",&num);
    if(front==0 && rear==MAX-1)
        printf("Overflow");
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        quene[rear]=num;
    }
    else if((front-rear)==1)
    {
        printf("cannot insert");
    }
    else if(rear==MAX-1 && front!=0)
    {
        rear=0;
        quene[rear]=num;
    }
    else
    {
        rear++;
        quene[rear]=num;
    }
}
int delete_element()
{
    int val;
    if(front==-1 && rear==-1)
    {
        printf("\n Underflow");
        return -1;
    }
    val=quene[front];
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        if(front==MAX-1)
            front=0;
        else
            front++;
    }
    return val;
}
int peek()
{
    if(front==-1 && rear==-1)
    {
        printf("\n quene is empty");
        return -1;
    }
    else
    {
        return quene[front];
    }
}
void display()
{
    int i=0;
    printf("\n");
    if(front==-1 && rear==-1)
        printf("\n Quene is empty");
    else {
        if(front==rear)
            printf("%d ",quene[front]);
        else if (front <rear)
            for (i = front; i <=rear; i++)
                printf("%d\t", quene[i]);
         else
     {
             for(i=front;i<MAX;i++)
                 printf("\t %d",quene[i]);
             for(i=0;i<=rear;i++)
                 printf("%d",quene[i]);
     }
    }
}
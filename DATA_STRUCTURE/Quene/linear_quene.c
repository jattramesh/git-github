//
// Created by rahul on 9/10/19.
//
#include <stdio.h>
#define MAX 10
int quene[MAX];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
void insert()
{
    int num;
    printf("Enter the number to be inserted in the quene");
    scanf("%d",&num);
    if(rear==MAX-1)
        printf("\n Overflow");
    else if(front==-1 && rear==-1)
    front=rear=0;
    else
    rear++;
    quene[rear]=num;
}
int delete_element()
{
    int val;
    if(front==-1 || front > rear) {
        printf("\n Underflow");
        return -1;
    }
    else
    {
        val=quene[front];
        front++;
        if(front>rear)
            front=rear=-1;
        return val;
    }
}
int peek()
{
    if(front==-1 || front>rear)
    {
        printf("Quene is empty");
        return -1;
    }
    else
    {
        return quene[front];
    }
}
void display()
{
    int i;
    printf("\n");
    if(front==-1 && front>rear)
        printf("\n Quene is empty");
    else
    {
        for(i=front;i<=rear;i++)
            printf("\t %d",quene[i]);
    }
}
int main()
{
    insert();
    insert();
    display();
    printf("%d",delete_element());
    display();
}
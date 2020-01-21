//
// Created by rahul on 8/8/19.
//
#include <stdio.h>
#include <malloc.h>
typedef struct list {
    int data;
    struct list *next;
}node;
node *start=NULL;
node *create_hll(node *);
node *display(node *);
int main()
{
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: EXIT");
        printf("\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: start = create_hll(start);
                printf("\n HEADER LINKED LIST CREATED");
                break;
            case 2: start = display(start);
                break;
        }
    }while(option !=3);
    return 0;
}
node *create_hll(node *start)
{
    node *newnode,*ptr;
    int num;
    printf("\n enter -1 to end \n");
    printf("enter the data");
    scanf("%d",&num);
    while(num!=-1)
    {
        newnode=(node *)malloc(sizeof(node ));
        newnode->data=num;
        newnode->next=NULL;
        if(start==NULL)
        {
            start=(node *)malloc(sizeof(node ));
            start->next=newnode;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
        }
        printf("enter the data \n");
        scanf("%d",&num);
    }
    return start;
}
node *display(node *start)
{
    node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
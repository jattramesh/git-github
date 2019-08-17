//
// Created by rahul on 6/8/19.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct list{
    int data;
    struct list *next;
}node;
node *start=NULL;
node *create_cll(node *);
node *display(node *);
node *insert_beg(node *);
node *delete_beg(node *);
node *delete_end(node *);
node *delete_after(node *);
node *delete_list(node *);
int main()
{
    int option;
    do{
        printf("\n\n ***********MAIN MENU ***********");
        printf("\n 1: create a list");
        printf("\n 2: display a list");
        printf("\n 3: add a node at begaining ");
        printf("\n 4:add a node at the end ");
        printf("\n 5: delete a node from begaining ");
        printf("\n 6: delete a node from last");
        printf("\n 7: delete a node after a given node");
        printf("\n delete the entire list");
        printf("\n EXIT");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                start=create_cll(start);
                printf("circular link has creted ");
                break;
            case 2:start=display(start);
                break;
            case 3:start=insert_beg(start);
                break;
            case 5: start=delete_beg(start);
                break;
            case 6:start=delete_end(start);
                break;
            case 7:start=delete_after(start);
                break;
            case 8:start=delete_list(start);

        }
    }while(option!=9);
    return 0;
}
node *create_cll(node *start)
{
    node *newnode,*ptr;
    int num;
    printf("enter the data for new node");
    scanf("%d",&num);
    printf("enter the value untill you enter -1");
    while(num!=-1)
    {
        newnode=(node*)malloc(sizeof(node));
        newnode->data=num;
        if(start==NULL)
        {
            newnode->next=newnode;
            start=newnode;
        } else{
            ptr=start;
            while(ptr->next!=start)
                ptr=ptr->next;
            ptr->next=newnode;
            newnode->next=start;
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
    while(ptr->next!=start)
    {
        printf("\t %d ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
    return start;
}
node *insert_beg(node *start)
{
    node *newnode,*ptr;
    int num;
    printf("enter the data :");
    scanf("%d",&num);
    newnode=(node *)malloc(sizeof(node));
    newnode->data=num;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    ptr->next=newnode;
    newnode->next=start;
    start=newnode;
}
node *delete_beg(node *start)
{
    node *ptr;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    ptr->next=start->next;
    free(start);
    start=ptr->next;
    return start;
}
node *delete_end(node *start)
{
    node *ptr;
    node *preptr;
    ptr=start;
    while(ptr->next!=start)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    return start;
}
node *delete_after(node *start)
{
    node *ptr;
    int val;
    node *preptr;
    printf("enter the value after which a value to be deleted \n");
    scanf("%d",&val);
    ptr=start;
    preptr=ptr;
    while(preptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    if(ptr==start)
    {
        start=preptr->next;
    }
    free(ptr);
    return  start;
}
node* delete_list(node *start)
{
    node *ptr;
    ptr=start;
    while(ptr->next!=start)
    {
        start=delete_end(start);
    }
    free(start);
    return start;
}

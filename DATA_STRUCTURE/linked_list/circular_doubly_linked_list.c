//
// Created by rahul on 8/8/19.
//
#include <stdio.h>
#include <malloc.h>
typedef struct list{
    struct list  *next;
    int data;
    struct list *prev;
}node;
node *start=NULL;
node *create_ll(node *);
node *display(node *);
node *insert_beg(node *);
node *insert_end(node *);
node *delete_beg(node *);
node *delete_end(node *);
node *delete_node(node *);
node *delete_list(node *);
int main()
{
    int option;
    do{

        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Delete a node from the beginning");
        printf("\n 6: Delete a node from the end");
        printf("\n 7: Delete a given node");
        printf("\n 8: Delete the entire list");
        printf("\n 9: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d",&option);
        switch(option)
        {

            case 1: start = create_ll(start);
                printf("\n CIRCULAR DOUBLY LINKED LIST CREATED");
                break;
            case 2: start = display(start);
                break;
            case 3: start = insert_beg(start);
                break;
            case 4: start = insert_end(start);
                break;
            case 5: start = delete_beg(start);
                break;
            case 6: start = delete_end(start);
                break;
            case 7: start = delete_node(start);
                break;
            case 8: start = delete_list(start);
                printf("\n CIRCULAR DOUBLY LINKED LIST DELETED");
                break;
        }
    }while(option!=9);
    return 0;

}
node *create_ll(node *start)
{
    node *newnode,*ptr;
    int num;
    printf("enter -1 to end");
    printf("enter the data :");
    scanf("%d",&num);
    while(num!=-1)
    {
        newnode=(node *)malloc(sizeof(node));
        newnode->data=num;
        if(start==NULL)
        {
            newnode->prev=NULL;
            newnode->next=newnode;
            start=newnode;
        }
        else
        {
            ptr=start;
            while(ptr->next!=start)
                ptr=ptr->next;
            ptr->next=newnode;
            newnode->next=start;
            newnode->prev=ptr;
        }
        printf("enter another elemnt \n");
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
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
    return start;
}
node *insert_beg(node *start)
{
    node *ptr,*newptr;
    int num;
    printf("\n enter the data :");
    scanf("%d",&num);
    newptr=(node *)malloc(sizeof(node));
    newptr->data=num;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    newptr->prev=ptr;
    ptr->next=newptr;
    newptr->next=start;
    start=newptr;
    return start;
}
node *insert_end(node *start)
{
    node *ptr,*newnode;
    int num;
    printf("enter the data \n");
    scanf("%d",&num);
    newnode=(node*)malloc(sizeof(node));
    newnode->data=num;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    ptr->next=newnode;
    newnode->prev=ptr;
    ptr->next=start;
    start->prev=newnode;
    return start;
}
node *delete_beg(node *start)
{node *temp;
    node *ptr;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
   ptr->next=start->next;
   temp=start;
    start=start->next;
    start->prev=ptr;
    temp;
    return start;
}
node *delete_node(node *start)
{
    node *tmp;
    node *ptr;
    ptr=start;
    int val;
    printf("enter the value of node to be deleted");
    scanf("%d",&val);
    if(ptr->data==val)
    {
        start=delete_beg(start);
        return start;
    }
    else {
        while (ptr->data != val)
            ptr = ptr->next;
      ptr->prev->next=ptr->next;
      ptr->next->prev=ptr->prev;
        free(ptr);
        return start;

    }
}
node *delete_list(node *start)
{node *ptr;
    ptr=start;
    while(ptr->next!=start)
        start=delete_beg(start);
    free(start);
    return start;
}
node *delete_end(node *start)
{
    node *ptr;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    start->prev=ptr->prev;
    ptr->prev->next=start;
    free(ptr);
    return start;
}
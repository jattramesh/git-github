//
// Created by rahul on 13/10/19.
//
#include <stdio.h>
#include <malloc.h>
struct nodes
{
    int data;
    int priority;
    struct nodes *next;
};
typedef struct nodes node;
node *start=NULL;
node *insert(node*);
node *delete(node*);
void display(node* );
int main()
{
    int option;
    do{
        printf("\n *****MAIN MENU*****");
        printf("\n 1. INSERT");
        printf("\n 2. DELETE");
        printf("\n 3. DISPLAY");
        printf("\n 4. EXIT");
        printf("\n Enter your option : ");
        scanf( "%d", &option);
        switch(option)
        {
            case 1:
                start=insert(start);
                break;
            case 2:
                start = delete(start);
                break;
            case 3:
                display(start);
                break;
        }
    }while(option!=4);
}
node *insert(node *start)
{
    int val,pri;
    node *ptr,*p;
    ptr=(node *)malloc(sizeof(node));
    printf("\n Enter the value and its priority\n");
    scanf("%d%d",&val,&pri);
    ptr->data=val;
    ptr->priority=pri;
    if(start==NULL || pri<start->priority)
    {
        ptr->next=start;
        start=ptr;
    }
    else
    {
        p=start;
        while(p->next !=NULL && p->next->priority <= pri)
            p=p->next;
        ptr->next=p->next;
        p->next=ptr;
    }
    return start;
}
node* delete(node *start)
{
    node *ptr;
    if(start==NULL)
    {
        printf("Underflow");
        return NULL;
    }
    else
    {
        ptr=start;
      printf("\n deleted item is: %d",ptr->data);
      start=start->next;
      free(ptr);
    }
    return start;

}
void display(node *start)
{
    node  *ptr;
    ptr=start;
    if(start==NULL)
        printf("\n Quene is empty");
    else
    {
        printf("\n priority quene is : ");
        while(ptr!=NULL)
        {
            printf("\t %d[priority=%d]",ptr->data,ptr->priority);
            ptr=ptr->next;
        }
    }
}
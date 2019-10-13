//
// Created by rahul on 9/10/19.
//
#include <stdio.h>
#include <malloc.h>
struct list{
    int data;
    struct list *next;
};
typedef struct list node;
struct q{
    struct list *front;
    struct list  *rear;
};
typedef struct q quene;
quene *p;
void create_quene(quene *);
quene *insert(quene *,int );
quene *delete_element(quene *);
quene *display(quene *);
int peek(quene *);
int main()
{
    int val,option;
    create_quene(p);
    do
    {
        printf("\n main menu ");
        printf("\n  1 insert");
        printf("\n 2 delete");
        printf("\n 3 peek");
        printf("\n 4 display");
        printf("\n 5 exit");
        printf("\nenter your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\n enter the number to inserted in the quene ");
                scanf("%d",&val);
                p=insert(p,val);
                break;
            case 2:
                p=delete_element(p);
                break;
            case 3:
                val=peek(p);
                printf("the value at the front of quene is %d",val);
                break;
            case 4:
                p=display(p);
                break;
        }
        printf("Enter an option again ");
        scanf("%d",&option);
    }while(option!=5);
return 0;
}
void create_quene(quene *p)
{
    printf("debigging");
    p->rear=NULL;
    p->front=NULL;
}
quene *insert(quene *q,int val)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->data=val;
    if(q->front==NULL)
    {
        q->front=ptr;
        q->rear=ptr;
        q->front->next=q->rear->next=NULL;
    }
    else
    {
        q->rear->next=ptr;
        q->rear=ptr;
        q->rear->next=NULL;
    }
    return q;
}
quene* display(quene *q)
{
    node *ptr;
    ptr=q->front;
    if(ptr==NULL)
        printf("Quene is empty");
    else
    {
        printf("\n");
        while(ptr!=q->rear)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
        printf("%d\t",ptr->data);
    }
    return q;
}
quene *delete_element(quene *q)
{
    node *ptr;
    ptr=q->front;
    if(q->front==NULL)
    {
        printf("Quene is empty ");
    }
    else
    {
        q->front=q->front->next;
        printf("\n the value being deleted is : %d",ptr->data);
        free(ptr);
    }
    return q;
}
int peek(quene *q)
{
    if(q->front==NULL) {
        printf("\n Quene is empty ");
        return -1;
    }
    else
    {
        return q->rear->data;
    }

}



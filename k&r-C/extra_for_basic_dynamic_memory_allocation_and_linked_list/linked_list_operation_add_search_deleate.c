#include <stdlib.h>
#include <stdio.h>
struct list{
    int num;
    struct list *next;
};
typedef struct list nodes;
void creatlist(nodes *ptr);
void printlist(nodes *ptr);
nodes *findnodes(nodes *ptr,int );
nodes *insertnodes(nodes *ptr);
void deletenodes(nodes *ptr);
int countnodes(nodes *ptr);
int  main()s
{
    int j=1,ch,c;
    nodes *head;
    head=(nodes *)malloc(sizeof(nodes));
    while(j)
    {
        printf("\n select your choice \n");
        printf("\n[1]:enter 1 to create new list");
        printf("\n[2]:enter 2 to print list");
        printf("\n[3]:enter 3 to count list item");
        printf("\n[4]:enter 4 to insert new node  ");
        printf("\n[5]:enter 5 to delete node from list");
        printf("\n[6]:enter 6 to exit list");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:creatlist(head);
            break;
            case 2:printf("your list is \n");
                printlist(head);
            break;
            case 3:printf("node in our list is \n");
            c=countnodes(head);
            printf("%d",c);
            case 4:
                insertnodes(head);
                break;
            case 5:
                deletenodes(head);
                break;
            default:
                j=0;
                printf("exit successs");
        }
    }
    return 0;
}
void creatlist(nodes *ptr)
{
    printf("enter nodes value and end .. press 00");
    scanf("%d",&ptr->num);
    if(ptr->num==0)
        ptr->next=NULL;
    else
    {
        ptr->next=(nodes *)malloc(sizeof(nodes));
        creatlist(ptr->next);
    }
        return ;
}
void printlist(nodes *ptr)
{
    if(ptr->next!=NULL)
    {
        printf("%d\t",ptr->num);
        printlist(ptr->next);
    }
}
nodes *findnodes(nodes *ptr,int p)
{
    if(ptr->next->num==p)
        return ptr;
    else if(ptr->next==NULL)
        return NULL;
    else
        findnodes(ptr->next,p);
}
nodes *insertnodes(nodes *ptr)
{
    nodes* newnode;//ptr to new node
    nodes *l; //to store the location of find node pointer
    int p;
    int z;//value for new node
    printf("enter the value for new node \n");
    scanf("%d",&z);
    printf("enter thye value of find node \n");
    scanf("%d",&p);
    if(ptr->num==p) //insert the value as first node
    {
        newnode=(nodes*)malloc(sizeof(nodes));
        newnode->num=z;
        newnode->next=ptr;
    }
    else
    {
        l=findnodes(ptr,p);
        if(l==NULL)
            printf("find node is not found \n");
        else
        {
            newnode=(nodes*)malloc(sizeof(nodes));
            newnode->num=z;
            newnode->next=l->next;
            l->next=newnode;
        }
    }
    return (ptr);

}
void deletenodes(nodes *ptr)
{
    int p;
    nodes *l;
    nodes *t;
    printf("enter node value to delete");
    scanf("%d",&p);
    l=findnodes(ptr,p);
    if(l==NULL)
        printf("find node is not found \n");
    else
    {
        t=l->next->next;
        free(l->next);
        l->next=t;
    }
}
int countnodes(nodes *ptr)
{
    if(ptr->next==NULL)
        return 0;
    else
    {
        return (1+countnodes(ptr->next));
    }
}
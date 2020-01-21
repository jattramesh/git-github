#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
typedef struct list{
    int data;
    struct list *next;
}node;
node *start=NULL;
 node *create_ll(node *);
 node *display(node *);
node *insert_beg( node *);
 node *insert_end( node *);
node *insert_before( node *);
 node *insert_after( node *);
 node *delete_beg(node *);
node *delete_end(node *);
 node *delete_node( node *);
 node *delete_after( node *);
 node *delete_list( node *);
 node *sort_list( node *);
 int main(int argc,char **argv)
 {
int option;
 do {
     printf("\n\n*********main menu ***************");
     printf("\n 1 :create the list \n");
     printf("\n 2 :display the list");
     printf("\n 3 :add a node at begainning");
     printf("\n 4 :add a node at end ");
     printf("\n 5 :add a node before a node");
     printf("\n 6 :add a node after a given node ");
     printf("\n 7 :delete a node from begaining");
     printf("\n 8 :delete a node from end ");
     printf("\n 9 :delete a given node");
     printf("\n10:delete a node from a given node ");
     printf("\n11:deleate the entire list");
     printf("\n12:sort the given list");
     printf("\n13:EXIT");
     scanf("%d", &option);
     switch (option) {
         case 1:
             start = create_ll(start);
             break;
         case 2:
             start = display(start);
             break;
         case 3:
             start = insert_beg(start);
             break;
         case 4:
             start = insert_end(start);
             break;
         case 5:
             start = insert_before(start);
             break;
         case 6:
             start = insert_after(start);
             break;
         case 7:
             start = delete_beg(start);
             break;
         case 8:
             start = delete_end(start);
             break;
         case 9:
             start = delete_node(start);
             break;
         case 10:
             start = delete_after(start);
             break;
         case 11:
             start = delete_list(start);
             printf("\n LINKED LIST DELETED");
             break;
         case 12:
             start = sort_list(start);
             break;
     }

 }while(option!=13);
 return 0;
 }
node *create_ll(node *start)
{
     node *ptr,*newnode;
     int num;
     printf("\n enter the -1 to end ");
     printf("\n enter the data ");
     scanf("%d",&num);
     while(num!=-1)
     {
         newnode=(node*)malloc(sizeof(node));
         newnode->data=num;
         if(start==NULL)
         {
             start=newnode;
             newnode->next=NULL;
         }
         else
         {
             ptr=start;
             while(ptr->next!=NULL)
                 ptr=ptr->next;
             ptr->next=newnode;
             newnode->next=NULL;
         }
         printf("\nenter the data ");
         scanf("%d",&num);
     }
     return start;
}
node* display(node *start) {
    node *ptr;
    ptr = start;
    while (ptr != NULL) {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }
    return start;
}
node *insert_beg(node *start)
{
     node *newnode;
     int n;
     newnode=(node *)malloc(sizeof(node));
     printf("enter the value of new node");
     scanf("%d",&n);
     newnode->data=n;
     newnode->next=start;
     start=newnode;
     return start;
}
node *insert_end(node *start)
{
     node *lastnode;
     int n;
     lastnode=(node *)malloc(sizeof(node));
     printf("enter the data for last node");
     scanf("%d",&n);
     lastnode->data=n;
    node *ptr;
     ptr=start;
     while(ptr->next!=NULL)
         ptr=ptr->next;
     ptr->next=lastnode;
     lastnode->next=NULL;
             return start;


}
node *insert_before(node* start) {
    node *newnode, *ptr, *preptr;
    int num, val;
    printf("enter the data ");
    scanf("%d", &num);
    printf("enter the value before which data to be inserted ");
    scanf("%d", &val);
    newnode = (node *) malloc(sizeof(node));
    newnode->data = num;
    ptr = start;
    while (ptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr;
    return start;
}
node *insert_after(node *start)
{
     node *ptr,*newnode,*preptr;
     int num,val;
     printf("enter the data \n");
     scanf("%d",&num);
     printf("enter the value after which data to be inserted");
     scanf("%d",&val);
     newnode=(node*)malloc(sizeof(node));
     newnode->data=num;
     ptr=start;
     preptr=ptr;
     while(preptr->data!=val)
     {
         preptr=ptr;
         ptr=ptr->next;
     }
     preptr->next=newnode;
     newnode->next=ptr;
     return start;
}
node *delete_beg(node *start)
{
     node *ptr;
     ptr=start;
     start=start->next;
     free(ptr);
     return start;
}
node *delete_end(node *start)
{
     node *ptr,*preptr;
     ptr=start;
     while(ptr->next!=NULL)
     {
         preptr=ptr;
         ptr=ptr->next;
     }
     preptr->next=NULL;
     free(ptr);
     return start;
}
node *delete_node(node *start) {
    node *ptr, *preptr;
    int val;
    printf("\n enter the value of node which has to be deleted ");
    scanf("%d", &val);
    ptr = start;
    if (ptr->data == val) {
        start = delete_beg(start);
        return start;
    } else {
        while (ptr->data != val) {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        return start;
    }
}
node *delete_after(node *start)
{
     node *ptr,*preptr;
     start=ptr;
     preptr=ptr;
     int val;
     printf("Enter the value to be deleted");
     scanf("%d",&val);
     while(preptr->data!=val)
     {
         preptr=ptr;
         ptr=ptr->next;
     }
preptr->next=ptr->next;
     free(ptr);
     return start;
}
node *delete_list(node *start)
{
     node *ptr;
     if(start!=NULL)
     {
ptr=start;
while(ptr!=NULL)
{
    printf("%d is to be deleted next ",ptr->data);
    start=delete_beg(ptr);
    ptr=start;
}
     }
     return start;
}
node *sort_list(node *start)
{
     node *ptr1,*ptr2;
     int temp;
     ptr1=start;
     while(ptr1->next!=NULL)
     {
         ptr2=ptr1->next;
         while(ptr2!=NULL)
         {
             if(ptr1->data > ptr2->data)
             {
                 temp=ptr1->data;
                 ptr1->data=ptr2->data;
                 ptr2->data=temp;
             }
             ptr2=ptr2->next;
         }
         ptr1=ptr1->next;
     }
     return start;
}
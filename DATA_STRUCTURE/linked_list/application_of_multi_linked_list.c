//
// Created by rahul on 9/8/19.
//
#include <stdio.h>
#include <malloc.h>
typedef struct list{
    int num;
    int coeff;
    struct list *next;
}node;
node *start1=NULL;
node *start2=NULL;
node *start3=NULL;
node *start4=NULL;
node *last3=NULL;
node *create_poly(node *);
node *display_poly(node *);
node *add_poly(node *,node *,node *);
node *sub_poly(node *,node *,node *);
node *add_node(node *,int ,int );
int main()
{
    int option;
    do{
        printf("\n******* MAIN MENU *******");
        printf("\n 1. Enter the first polynomial");
        printf("\n 2. Display the first polynomial");
        printf("\n 3. Enter the second polynomial");
        printf("\n 4. Display the second polynomial");
        printf("\n 5. Add the polynomials");
        printf("\n 6. Display the result");
        printf("\n 7. Subtract the polynomials");
        printf("\n 8. Display the result");
        printf("\n 9. EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: start1 = create_poly(start1);
                break;
            case 2: start1 = display_poly(start1);
                break;
            case 3: start2 = create_poly(start2);
                break;
            case 4: start2 = display_poly(start2);
                break;
            case 5: start3 = add_poly(start1, start2, start3);
                break;
            case 6: start3 = display_poly(start3);
                break;
            case 7: start4 = sub_poly(start1, start2, start4);
                break;
            case 8: start4 = display_poly(start4);
                break;
        }
    }while(option!=9);
    return 0;
}

node *create_poly(node *start)
{
    node *newnode,*ptr;
    int n,c;
    printf("enter the node :");
    scanf("%d",&n);
    printf("enter the cofficient :");
    scanf("%d",&c);
    while(n!=-1)
    {
        if(start==NULL)
        {
            newnode=(node *)malloc(sizeof(node));
            newnode->num=n;
            newnode->coeff=c;
            newnode->next=NULL;
            start=newnode;
        }
        else
        {
            newnode=(node *)malloc(sizeof(node));
            newnode->num=n;
            newnode->coeff=c;
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
            newnode->next=NULL;
        }
        printf("\n enter the number :");
        scanf("%d",&n);
        if(n==-1)
            break;
        printf("enter its coefficient :");
        scanf("%d",&c);
    }
    return start;
}
node *display_poly(node *start)
{
    node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("\n %d x %d\t",ptr->next,ptr->coeff);
        ptr=ptr->next;
    }
    return start;
}
node *add_poly(node *start1,node *start2,node *start3)
{
    node *ptr1,*ptr2;
    int sum_num,c;
    ptr1=start1;
    ptr2=start2;
    while(ptr1!=NULL && ptr2!=NULL) {
        if (ptr1->coeff == ptr2->coeff) {
            sum_num = ptr1->num + ptr2->num;
            start3 = add_node(start3, sum_num, ptr1->coeff);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        } else if (ptr1->coeff > ptr2->coeff) {
            start3 = add_node(start3, ptr1->num, ptr1->coeff);
            ptr1 = ptr1->next;
        } else if (ptr1->coeff < ptr2->coeff) {
            start3 = add_node(start3, ptr2->num, ptr2->coeff);
            ptr2 = ptr2->next;
        }
    }
    if(ptr1==NULL)
    {
        while(ptr2!=NULL)
        {
            start3=add_node(start3,ptr2->num,ptr2->coeff);
            ptr2=ptr2->next;
        }
    }
    if(ptr2==NULL)
    {
        while(ptr1!=NULL)
        {
            start3=add_node(start3,ptr1->num,ptr1->coeff);
            ptr1=ptr1->next;
        }
    }
    return start3;
}
node *add_node(node *start,int n,int c)
{
    node *ptr,*newnode;
    if(start==NULL)
    {
        newnode=(node *)malloc(sizeof(node));
        newnode->num=n;
        newnode->coeff=c;
        newnode->next=NULL;
        start=newnode;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        newnode=(node *)malloc(sizeof(node));
        newnode->num=n;
        newnode->coeff=c;
        newnode->next=NULL;
        ptr->next=newnode;
    }
    return start;
}
node *sub_poly(node *start1,node *start2,node *start3)
{
    node *ptr1,*ptr2;
    int sub_num,c;
    ptr1=start1;
    ptr2=start2;
    do {
        if (ptr1->coeff == ptr2->coeff) {
            sub_num = ptr1->num - ptr2->num;
            start4 = add_node(start4, sub_num, ptr1->coeff);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        } else if (ptr1->coeff > ptr2->coeff) {
            start4 = add_node(start4, ptr1->num, ptr1->coeff);
            ptr1 = ptr1->next;
        } else if (ptr1->coeff < ptr2->coeff) {
            start4 = add_node(start4, ptr2->num, ptr2->next);
            ptr2 = ptr2->next;
        }
    }
    while(ptr1!=NULL && ptr2!=NULL);
            if(ptr1==NULL)
            {
                while(ptr2!=NULL) {
                    start4 = add_node(start4, ptr2->num, ptr2->coeff);
                    ptr2 = ptr2->next;
                }

            }
            if(ptr2==NULL)
            {
                while(ptr1!=NULL)
                {
                    start4=add_node(start4,ptr1->num,ptr1->coeff);
                    ptr1=ptr1->next;
                }
            }
    return start4;
    }

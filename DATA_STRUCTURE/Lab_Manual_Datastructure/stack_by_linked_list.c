#include<stack.c>
#include<stdio.h>
#include<stdlib.h>
struct list
{
  int data;
  struct list *next;
};
typedef struct list node;
node *top=NULL;
void push()
{
  if(top==NULL)
  {
    node *first;
    first=(node *)malloc(sizeof(node));
    printf("enter the data to be inerted in stack");
    scanf("%d",&first->data);
    top=first;
    first->next=NULL;
  }
  else
  {
    node *nodes;
    nodes=(node*)malloc(sizeof(node));
    printf("Enter the data inserted in stack\n");
    scanf("%d",&nodes->data);
    nodes->next=top;
    top=nodes;
  }
}
int pop()
{
  int val;
  node *new;
  new=top;
  if(top==NULL)
  return printf("Stack underflow and length of underflow warning is \n");
  else
  {
    val=top->data;
    top=top->next;
    free(new);
  }
  return val;
}
int main()
{
  push();
  push();push();push();push();push();push();
  printf("%d",pop());
  printf("%d",pop());printf("%d",pop());printf("%d",pop());printf("%d",pop());printf("%d",pop());printf("%d",pop());printf("%d",pop());
}

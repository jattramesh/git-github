#include<stdio.h>
#define MAX 1
 int stack[MAX];
 int top=-1;
int pop()
{
  return (top==-1) ? (printf("stack overflow")): stack[top--];
}
void push(int val)
{
  (top==MAX-1) ?  printf("Stack overflow \n") : (stack[++top]=val);
}
int main()
{
  push(10);  push(10);  push(10);

}

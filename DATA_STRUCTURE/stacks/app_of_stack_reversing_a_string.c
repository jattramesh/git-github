//
// Created by rahul on 14/8/19.
//
#include <stdio.h>
int stk[10];
int top=-1;
int pop();
void push(int );
int main()
{
    int val,n,i;
    int arr[10];
    printf("enter the number of element in the array \n");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        push(arr[i]);
    for(i=0;i<n;i++)
    {
        val=pop();
        arr[i]=val;
        printf("%d \t",arr[i]);
    }
}
void push(int val)
{
    stk[++top]=val;
}
int pop()
{
    return (stk[top--]);
}

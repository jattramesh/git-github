//
// Created by rahul on 30/9/19.
//
#include <stdio.h>
void hanoi(int n,char A, char B , char C)
{
    if(n!=0)
    {
        hanoi(n-1,A,C,B);
        printf("Move disk %d from %c to %c\n",n,A,C);
        hanoi(n-1,B,A,C);
    }
}
int main()
{
    int n;
    char A='A',B='B',C='C';
    printf("Enter number of disk");
    scanf("%d",&n);
 printf("\n\n Tower of hanoi problem with %d disk \n\n",n);
 printf("Sequence is :\n");
 hanoi(n,A,B,C);
 printf("\n");
}
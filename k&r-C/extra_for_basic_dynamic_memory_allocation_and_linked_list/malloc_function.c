//
// Created by rahul on 19/7/19.
//
#include <stdio.h>
#include <stdlib.h> //for malloc function and free fuction
int main()
{
    int number,num;
    int *ptr;
    int i;
 printf("how many items do u like to store\n");
 scanf("%d",&number);
 ptr=malloc(number* sizeof(int));  //allocate memory
 if(ptr!=NULL)
     for(i=1;i<=number;i++)
     {
         printf("enter number [%d]",i);
         scanf("%d",&num);
         *ptr++=num;
     }
 printf("sorted element is : \n");
     for(i=number;i>0;i--)
         printf("%d\n",*--ptr);
21
}

//
// Created by rahul on 3/8/19.
//
#include <stdio.h>
#include "getarray.h"
typedef struct st{
    union {
        char name[20];
        int roll_no;
    };
    int marks;
}student;
int main()
{
    student rahul;
    char choice;
    printf("you can enter the name or roll number of student :");
    printf("\n do you want to enter the name? (y/ n ):");
    choice=getchar();
    if(choice=='y' || choice=='Y')
    {
        printf("\n enter the name :");
        getarray(rahul.name,20);
        getarray(rahul.name,20);
    }
    else
    {
        printf("\n enter the roll number :");
        scanf("%d",&rahul.roll_no);
    }
    printf("\n enter the marks:");
    scanf("%d",&rahul.marks);
    if(choice=='y' || choice=='Y')
        printf("\n Name : %s",rahul.name);
    else
        printf("\n roll number : %d",rahul.roll_no);
    printf("\n Marks: %d",rahul.marks);
    return 0;
}
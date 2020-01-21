//
// Created by rahul on 3/8/19.
//
#include <stdio.h>
#include <stdlib.h>
#include "getarray.h"

typedef struct stu{
    int r_no;
  char name[20];
  char course[10];
  int fees;
}student;
student *ptr_stud[10];
int main()
{
    int i,n;
    printf("\n enter the number of student :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ptr_stud[i]=(student *)malloc(sizeof (student));
        printf("enter the data for student %d\n",i+1);
        getarray(ptr_stud[i]->name,20);
        printf(" NAME:");
        getarray(ptr_stud[i]->name,20);
        printf(" Course : ");
        getarray(ptr_stud[i]->course,20);
        printf("\n Roll no:");
        scanf("%d",&ptr_stud[i]->r_no);
        printf("\n FEES");
        scanf("%d",&ptr_stud[i]->fees);
    }
    printf("\n detail of student :");
    for(i=0;i<n;i++)
    {
        printf("\n roll number =%d",ptr_stud[i]->r_no);
        printf("\n name = %s",ptr_stud[i]->name);
        printf("\n course = %s",ptr_stud[i]->course);
        printf("\n fees = %d",ptr_stud[i]->fees);
    }
    return 0;
}

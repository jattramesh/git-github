//
// Created by rahul on 3/8/19.
//
#include <stdio.h>
#include <stdlib.h>
#include "getarray.h"
typedef struct stud{
    int r_no;
    char name[20];
    char course[20];
    int fees;
}student;
void display(student *);
int main() {
    student *ptr;
    ptr = (student *) malloc(sizeof(student));
    printf("enter the data for the student \n");
    printf("\n ROLL NUMBER ");
    scanf("%d", &ptr->r_no);
    printf("\n NAME :");
    getarray(ptr->name, 20);
    getarray(ptr->name, 20);
    printf("enter course \n");
    getarray(ptr->course, 20);
    printf("enter fees ");
    scanf("%d", &ptr->fees);
    display(ptr);
    return 0;
}
void display (student *ptr)
{
    printf("DEtail of student \n");
  printf("Roll number %d",ptr->r_no);
  printf("name = %s",ptr->name);
  printf("course = %s",ptr->course);
  printf("fees= %d",ptr->fees);

}

//
// Created by rahul on 3/8/19.
//
#include <stdio.h>

int getarray(char arr[], int maxsize)
{
    int x;
    int i=0;
    while((x=getchar())!='\n' && i<maxsize)
    {
        arr[i]=x;
        i++;

    }
    arr[i]='\0';


}
typedef struct {
    int r_no;
    char name[20];
    char course[20];
    int fees;
    char nickname[90];
}student ;
int main()
{
    student stude1;
    student *ptr_stud;
    ptr_stud=&stude1;
    printf("enter the detail of student :");
    printf("\n enter the roll number ");
    scanf("%d",&ptr_stud->r_no);
    printf(" enter the fees\n");
    scanf("%d",&ptr_stud->fees);
    getarray(ptr_stud->course,20);
    printf("enter the course ");
    getarray(ptr_stud->course,20);
    printf("\n ********Detail of student are *******\n");
    printf("Roll number=%d",ptr_stud->r_no);
    printf("Name\n %s",ptr_stud->name);
    printf("\nfees %d",ptr_stud->fees);
    printf("Nick name %s",ptr_stud->nickname);
    printf("\ncourse %s",ptr_stud->course);
    return 0;
}
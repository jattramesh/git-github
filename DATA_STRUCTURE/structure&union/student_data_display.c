//
// Created by rahul on 2/8/19.
//
#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct{
        int rollno;
        int fees;
        char name[20];
        char dob[15];
    }student;
    student stud[50];
    int n,i,num,new_roll;
    int new_fees;
    char new_dob[15];
    char new_name[20];
    printf("enter the number of student \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the roll number  of student\n");
        scanf("%d",&stud[i].rollno);
        printf("\n enter the name");
        scanf("%s",stud[i].name);
        printf("\nenter the fees");
        scanf("%d",&stud[i].fees);
        printf("\nenter the dob\n");
        scanf("%s",stud[i].dob);
        printf("\n student  %d",i+2);
    }
    for(i=0;i<n;i++)
    {
        printf("*********DETAIL OF STUDENT***********");
        printf("Name of student = %s\n",stud[i].name);
        printf("\nroll no %d\n",stud[i].rollno);
        printf("FEES %d",stud[i].fees);
        printf("\n dob %s",stud[i].dob);
    }
    printf("enter the student number whose record to be edited ");
    scanf("%d",&num);
    num=num-1;
    printf("\n enter the new roll number ");
    scanf("%d",&new_roll);
    printf("\n enter the new name");
    scanf("%s",new_name);
    printf("enter the new fees :");
    scanf("%d",&new_fees);
    printf("\n enter the new dob\n");
    scanf("%s",new_dob);
    stud[num].rollno=new_roll;
    stud[num].fees=new_fees;
    strcpy(stud[num].name,new_name);
    strcpy(stud[num].dob,new_dob);
for(i=0;i<n;i++)
{
    printf("*********DETAIL OF STUDENT***********");
    printf("Name of student = %s\n",stud[i].name);
    printf("\nroll no %d\n",stud[i].rollno);
    printf("FEES %d",stud[i].fees);
    printf("\n dob %s",stud[i].dob);
}
return 0;
}
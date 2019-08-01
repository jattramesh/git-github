//
// Created by rahul on 1/8/19.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int getarray(char arr[],int maxsize)
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
int main()
{
    char temp[10];
    char student[5][30];
    printf("Enter the names of student \n");
    for(int i=0;i<5;i++)
    getarray(student[i],30);
    for(int j=0;j<5;j++)
    for (int i=0;i<5;i++)
    {
        if(strcmp(student[i],student[i+1])>0)
        {
            strcpy(temp,student[i]);
            strcpy(student[i],student[i+1]);
            strcpy(student[i+1],temp);
        }
    }

    printf("\n Names of student in alphabetical order are :");
    for(int i=0;i<5;i++)
puts(student[i]);
return 0;
}

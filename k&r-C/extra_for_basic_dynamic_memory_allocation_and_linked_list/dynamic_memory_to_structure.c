//
// Created by rahul on 19/7/19.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct bio{
        char name[30];
        int age;
        int sal;
        char add[20];
    };
    struct bio *pa;
    pa=(struct bio *)(malloc)(sizeof(struct bio)); //provide memory to pa
    printf("Enter name salary and address\n");
    scanf("%s%d%d%s",pa->name,&pa->age,&pa->sal,pa->add);
    printf("%s%d%d%s",pa->name,pa->age,pa->sal,pa->add);
    free(pa);
}

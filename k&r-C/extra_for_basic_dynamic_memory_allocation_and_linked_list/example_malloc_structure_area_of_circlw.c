
// Created by rahul on 19/7/19.
//
#include <stdlib.h>
#include <stdio.h>
int main() {
    struct area {
        int rad;
        float area;
    };
struct area *ar;
ar=(struct area *)(malloc(sizeof(struct area)));
printf("enter the radious of circle \n");
scanf("%d",&ar->rad);
ar->area=3.14* ar->rad * ar->rad;
printf("%f",ar->area);
free(ar);
}

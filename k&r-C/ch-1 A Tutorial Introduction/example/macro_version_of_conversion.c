//
// Created by Rahul on 6/18/2019.
//
//
// Created by Rahul on 6/18/2019.
//
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main()

{
    int fahr;
    for(fahr=LOWER;fahr<=UPPER;fahr+=STEP)
        printf("%d \t %d \n",fahr,5*(fahr-32)/9);
}
//macro is a replacement text or number for generation of symbolic constant
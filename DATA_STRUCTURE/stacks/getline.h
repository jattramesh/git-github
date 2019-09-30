//
// Created by rahul on 29/9/19.
//

#ifndef STACKS_GETLINE_H
#define STACKS_GETLINE_H

#include <stdio.h>

void getarray(char ar[])
{
    int i=0;
    int c;
    while((c=getchar())!='\n')
    {
        ar[i]=c;
        i++;
    }
    ar[i]='\0';
}
#endif //STACKS_GETLINE_H

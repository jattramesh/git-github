//
// Created by rahul on 1/8/19.
//

#ifndef STIRNG_GETARRAY_H
#define STIRNG_GETARRAY_H

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
#endif //STIRNG_GETARRAY_H

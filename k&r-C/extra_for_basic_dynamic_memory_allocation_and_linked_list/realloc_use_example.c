//
// Created by rahul on 19/7/19.
//
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char *in,*ch;
    in=(char *)malloc(4*sizeof(char)); //allocate memory
    in="HRA";
    ch=(char*)realloc(in,20);
    in="HERE COMES EXAMPLE";
    puts(in);
    free(in);

}
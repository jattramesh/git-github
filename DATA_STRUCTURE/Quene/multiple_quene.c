//
// Created by rahul on 13/10/19.
//
#include <stdio.h>
#define MAX 10
int quene[MAX], rearA=-1,frontA=-1,rearB=MAX, frontB=MAX;
void insertA(int val)
{
    if(rearA==rearB -1)
        printf("overflow");
    else
    {
        if(rearA==-1 && frontA==-1)
        {
            rearA=frontA=0;
            quene[rearA]=val;
        }
        else
            quene[++rearA]=val;
    }


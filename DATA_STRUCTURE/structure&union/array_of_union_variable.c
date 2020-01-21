//
// Created by rahul on 3/8/19.
//
#include <stdio.h>
typedef union pot{
    int x,y;
}point ;
int main()
{
    int i;
    point point1[3];
    point1[0].x=2;
    point1[0].y=3;
    point1[1].x=6;
    point1[2].x=3;
    point1[2].y=6;
for(i=0;i<3;i++)
    printf("Coordinate of point[%d] are %d and %d",i,point1[i].x,point1[i].y);
return 0;
}
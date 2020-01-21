//
// Created by rahul on 11/7/19.
//
#include <stdio.h>
char *month_name(int n)
{
    static char *name[]={
            "illegal month","january","february","march","april"
,"may","june","july","august","september","october","november","december"    };
    return (n<1 || n>12 ) ? *name : *(name+n);//name[0] or name[n]
}
int  main()
{
    char *s;
    s=month_name(13);
    printf("%s",s);
}
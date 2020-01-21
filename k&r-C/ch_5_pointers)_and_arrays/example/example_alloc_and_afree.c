//
// Created by rahul on 10/7/19.
//
#define ALLOCSIZE 10000 //size of avialiable space
static char allocbuf[ALLOCSIZE]; //storage for alloc
static char *allocp=allocbuf;  //next free position
char *alloc(int n)
{
    if(allocbuf+ALLOCSIZE-allocp>=n)  //it fits
    {
        allocp+=n;
        return allocp-n; //old position
    }
    else  //not enough room
        return 0;
}
void afree(char *p)  //free storage pointed by p
{
    if(p>=allocbuf && p<allocbuf+ALLOCSIZE)
        allocp=p;
}
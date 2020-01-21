//
// Created by rahul on 2/8/19.
//
#include <stdio.h>
typedef struct distance{
    int kms;
    int mts;
}DISTANCE;
DISTANCE add_distance(DISTANCE,DISTANCE);
DISTANCE subtract_distance(DISTANCE,DISTANCE);
DISTANCE d1,d2,d3,d4;
int main()
{
    int option;
    while(option!=5){
        printf("\n ***********MAIN MENU **********\n");
        printf("\n 1. read the distance");
        printf("\n 2.display the distances");
        printf("\n 3.add the distance");
        printf("\n 4. subtract the distances");
        printf("\n 5. EXIT");
        printf("\n Enter your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("enter the first distance in kms and meters :");
                scanf("%d %d",&d1.kms,&d1.mts);
                printf("\n enter the second distance");
                scanf("%d %d",&d2.kms,&d2.mts);
                break;
            case 2:
                printf("\n The first distance is : %d kms %d meters",d1.kms,d1.mts);
                printf("\n the second distance is : %d kms %d meters",d2.kms,d2.mts);
                break;
            case 3:
                d3=add_distance(d1,d2);
                printf("\n the sum of two distances is : %d kms %d meters",d3.kms,d3.mts);
                break;
            case 4:
                d4=subtract_distance(d1,d2);
                printf("\n the diffence of two distance is :%d kms %d metres",d4.kms,d4.mts);
                break;

        }
    }
    return 0;
}
DISTANCE add_distance(DISTANCE d1,DISTANCE d2)
{
    DISTANCE d3;
    d3.mts=d1.mts+d2.mts;
    d3.kms=d1.kms+d2.kms;
    while(d3.mts>1000)
        d3.mts=d3.mts%1000;
    d3.kms+=1;
    return d3;
}
DISTANCE subtract_distance(DISTANCE d1,DISTANCE d2)
{
    DISTANCE sub;
    if(d1.kms>d2.kms)
    {
        sub.mts=d1.mts-d2.mts;
        sub.kms=d1.kms-d2.kms;
    }
    else if(d2.kms>d1.kms)
    {
        sub.mts=d2.mts-d1.mts;
        sub.kms=d2.kms-d1.kms;
    }
    if(sub.mts<0)
    {
        sub.kms-=1;
        sub.mts+=1000;
    }
    return sub;

}
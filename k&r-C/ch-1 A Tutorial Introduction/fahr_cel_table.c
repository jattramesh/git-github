//
// Created by Rahul on 6/18/2019.
//
#include <stdio.h>
/* for printing table of temp conversion for fahr=0,20,.....,300*/
main()
{
    int fahr, cel;
    int lower,upper,step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    while(fahr<=upper)
    {
        cel=(5)*(fahr-32)/9;
        printf("%d\t%d\n",fahr,cel);
        fahr=fahr+20;
    }

}

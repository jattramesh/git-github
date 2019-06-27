//
// Created by Rahul on 6/18/2019.
//
#include <stdio.h>
int main()
{
    double cel,fahr;
    int lower,upper,step;
    lower=0;
    step=20;
    upper=300;
    fahr=lower;
    while(fahr<upper)
    {
        cel=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f \t %6.1f\n",fahr,cel);
        fahr+=step;
    }
    //%o for octal,%x for hexadecimal %c for characterand %% for %
    //for cel to fahr ,,fahr=(9.0/5.0)*cel+32;
}


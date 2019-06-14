//
// Created by Rahul on 6/2/2019.
//

#ifndef UNTITLED_MYFUNC_H
#define UNTITLED_MYFUNC_H

#include <iostream>
using namespace std;
long dsum (double a,double b, double c=0,double d=0);
inline int  Max(double a, double b)
{
   return ((a>=b ? a : b));

}
long dsum( double a1,double a2,double a3,double a4 )
{
    return (a1+a2+a3+a4);
}
inline char Max(char a, char b)
{
    return (a<b ? b :a );
}
long Fact(int j)
{
    int i,fact=1;
    if(j==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=j;i++)
       fact=fact*(i);
    }
    return (fact);
}
long  recfact(unsigned int n)
{
if(n<=0)
return 1;
else
    return recfact(n-1)*n;
}
long  pow(long base ,long  power)
{
    int i;
    for(i=1;i<power;i++)
        return pow(base ,power-1)*base;
}
#endif //UNTITLED_MYFUNC_H

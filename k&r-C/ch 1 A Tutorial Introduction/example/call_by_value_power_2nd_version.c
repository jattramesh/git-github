//
// Created by Rahul on 6/19/2019.
//
int power(int base,int n)
{
    int p;
    for(p=1;n>0;--n)
    {
        p=p*base;

    }
    return p;
}

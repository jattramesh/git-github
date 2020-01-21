//
// Created by Rahul on 6/23/2019.
//
unsigned setbits(unsigned int x,int p,int n,unsigned int y)
{
    return x & ~(~(~0<<n)) <<(p+1-n)|(y&~(~0<<n)<<(p+1-n));
}
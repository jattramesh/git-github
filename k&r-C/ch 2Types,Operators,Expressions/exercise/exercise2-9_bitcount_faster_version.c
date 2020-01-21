//
// Created by Rahul on 6/24/2019.
//

int bitcount(unsigned x)
{
    int b;
    for(b=0;x!=0;x&=x-1)
        ++b;
    return b;
}/*
 * as x=10 so x-1=9
 * 1010
 * &
 * 1001
 * 1000
 * &
 * 0111
 * 0000
 */
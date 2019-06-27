//
// Created by Rahul on 6/24/2019.
//count number of one bits in a given argument
int bitcout(unsigned int x)
{
    int b;
    for(b=0;x!=0;x>>=1)
    {
        if(x&01)
            b++;
    }
    return b;
}


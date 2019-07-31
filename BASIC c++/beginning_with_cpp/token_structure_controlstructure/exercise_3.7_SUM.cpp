//
// Created by rahul on 21/7/19.
//
#include <iostream>
#include <cmath>
#define ACCURACY 0.001
int main()
{
    int n;
    float sum,n1,m;
    n=1;sum=0;
    for(int i=1;;i++) {
        n1 = float(1) / n;
        m = pow(n1, i);
        std::cout<<m<<'\n';
        sum +=m;
        std::cout<<"sum"<<sum<<'\n';
        if (m <= ACCURACY)
            break;
        n++;
    }
    std::cout<<sum<<"\n";
return 0;

}
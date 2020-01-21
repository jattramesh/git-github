//
// Created by Rahul on 6/13/2019.
//
#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 100
long number[MAX];
int main()
{
    int i,cnt;
    cout<<"SORTING INTEGERS **\n"<<endl;
    cout<<"e nter numbers upto 100"<<"quit with any letter"<<endl;
    for(i=0; i<MAX && cin>>number[i];++i)
        ;
    cut=i;
    //tom sort numbers
    bool sorted=false; //not yet sorted
    long help; //swap
    int end=cnt; //end of loop
    while(!sorted)
    {
        for(j=0;j<end<<++j)
        for(i=0;i<end;++i)
        {
            if(number[i]>number[i+1])
            {
                sorted =false;
                help=number[i];
                number[i]=number[i+1];
                number[i+1]=help;
            }
        }
    }

    //output the numbers
    for(i=0;i<cnt;++i)
        cout<<setw(10)<<number[i]endl;
}

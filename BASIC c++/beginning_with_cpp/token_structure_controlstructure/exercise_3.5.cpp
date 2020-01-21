//
// Created by rahul on 20/7/19.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int k;
    int count[5];
    int test;
    for(int i=0;i<=4;i++)
        count[i]=0;
    int sploit_ballet=0;
    cout<<" You can vot candidate 1 to 5 "<<endl<<" press 1 or 2 or 3 or 4 or 5 to vote "<<endl<<" candidate 1 or 2 or 3 or 4 or 5 respectively "<<endl<<" press any integer value outside the range 1 to 5 for NO VOTE "<<endl<<" press anynegative value to terminate and see result :"<<endl;
    while(1)
    {
        cin>>test;
        for(int i=1;i<=5;i++)
        {
            if(test==i)
            {
                count[i-1]++;
            }

        }
        if(test<0)
            break;
        else if(test>5)
            sploit_ballet++;
    }
    for(k=1;k<=5;k++)
    cout<<"candiate"<<k<<setw(12);
    cout<<setw(7);
    for(k=0;k<5;k++)
cout<<count[k]<<setw(13);
    cout<<endl;
    cout<<"sploit ballot"<<sploit_ballet<<endl;
    return 0;
}


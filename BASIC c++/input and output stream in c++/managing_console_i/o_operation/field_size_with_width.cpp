//
// Created by rahul on 9/8/19.
//
#include <iostream>
using namespace std;
int main()
{
    int item[4]={10,8,12,15};
    int cost[4]={75,100,60,99};
    cout.width(5);
    cout<<"items";
    cout.width(8);
    cout<<"costs";
    cout.width(15);
    cout<<"total value"<<endl;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        cout.width(5);
        cout<<item[i];
        cout.width(5);
        cout<<cost[i]<<endl;
        sum=sum+item[i]*cost[i];
    }
    cout<<"\n""grand total=";
    cout.width(2);
    cout<<sum<<"\n";
    return 0;
}

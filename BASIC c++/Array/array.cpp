//
// Created by Rahul on 6/13/2019.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int Maxcnt=10;
    short number[20];
    float arr[Maxcnt],x;
    int i,cnt;
    cout<<"enter up to 10 numbers"<<endl;
    for(i=0;i<Maxcnt && cin>>x;++i)
        arr[i]=x;
    cnt=i;
    cout<<"the given number are"<<endl;
    for(i=0;i<cnt;++i)
        cout<<setw(10)<<arr[i]<<endl;
    for(int i=0;i<20;i++)
        number[i]=i*sizeof(float);
for(i=0;i<20;i++)
    cout<<number[i]<<endl;
        return 0;
}
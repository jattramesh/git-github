//
// Created by Rahul on 6/15/2019.
//
#include <iostream>
using namespace std;
int main()
{
    int v[]={10,02,30,40},i,*pv;
    for(pv=v;pv<=v+3;pv++)
        cout<<"     *pv = "<<*pv<<endl;
    for(pv=v,i=1;i<=3; i++)
    cout<<"     pv[i] "<<pv+i<<endl;
    for(pv=v,i=0;pv+i<=&v[3];pv++,i++)
        cout<<"*(pv+i)"<<*(pv+i)<<endl;
    cout<<&v[3]<<endl;
    for(pv=v+3;pv>=v;--pv)
        cout<<"     v["<<(pv-v)<<"]="<<v[pv-v]<<endl;
}
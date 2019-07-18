//
// Created by Rahul on 6/14/2019.
//
#include <iostream>
using namespace std;
int main()
{
    float v[6]={0.0,1.2,2.3,4.5,6.7,5.3};
    float *pv,x;
    cout<<pv<<endl;
    pv=v+4;//pv eq. &v[4]
    cout<<pv<<'\t'<<*pv<<endl;
    *pv=1.4;
    cout<<pv<<*pv<<'\t'<<endl;
    pv-=2;//reset pv to v[2]
    cout<<*pv<<endl;
    ++pv;
    cout<<*pv<<endl;
    x=*(++pv);
    cout<<"aa"<<x<<endl;
    *pv=x+1;
    cout<<v[4]<<endl;
    int index=pv-v;//pv+v doesnot make sense
    cout<<index<<"ci"<<endl;

    cout<<x<<endl;
    x+=*pv--;
    cout<<x<<*pv<<endl;
    pv=v;
    for(pv=v+5;pv>=v;--pv)
        cout<<*pv<<endl;
}

//
// Created by rahul on 19/7/19.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m;
    int *v;
    cout<<"enter vector size "<<endl;
    cin>>m;
    v=new int[m];
    cout<<"lets us check out"<<endl;
    for(int i=0;i<m;i++)
    cin>>v[i];
    cout<<"given integer values are "<<endl;
    for(int i=0;i<m;i++)
    {
        if(i==m-1)
            cout<<v[i];
        else
            cout<<v[i]<<",";
    }
    cout<<endl;
}
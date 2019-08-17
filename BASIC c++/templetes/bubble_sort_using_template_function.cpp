//
// Created by rahul on 17/8/19.
//
#include <iostream>
using namespace std;
template <class X>
void swapp(X &a,X &b)
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}
template<class T>
void bubble( T a[],int n)
{
   for(int i=0;i<n-1;i++)
       for(int j=n-1;i<j;j--)
           if(a[j-1]>a[j])
               swapp(a[j-1],a[j]);
}
int main()
{
    int x[5]={40,30,20,10,-3};
    double y[5]={34.4,30.5,-10.6,-1/4,-12};
    bubble(x,5);
    bubble(y,5);
    cout<<"sorted x-array"<<endl;
    for(int i=0;i<5;i++)
        cout<<x[i]<<" "<<endl;
    cout<<"sorted y-arrays"<<endl;
    for(int j=0;j<5;j++)
        cout<<y[j]<<" ";
    cout<<endl;
    return 0;
}


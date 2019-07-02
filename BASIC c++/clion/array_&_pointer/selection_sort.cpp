//
// Created by Rahul on 6/15/2019.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void selectionsort(int arr[],int len);
const int len=200;
int arr[len];
int main()
{
    cout<<"\n ********selection sort algorithium**************\n"<<endl;
    //to initialize array with random numbers
    srand((unsigned int)time(NULL));//initialize with random number
    for(int n=0;n<len;n++)
        arr[n]=((rand()%20000)-10000);
    //to sort the nymbers
    selectionsort(arr,len);
    for(int i=0;i<len;i++)
        cout<<setw(8)<<arr[i];
    cout<<endl;
}
inline void swap(int *a,int *b)
{
    int *temp=a;
    a=b;
    b=temp;
}
/*          index version*/
void selectionsort(int ar[],int len)
{
    register int j,mini;
    for(int i=0;i<len-1;i++)
    {
        mini=i;
        for(j=i+1;j<len;++j)
            if(arr[mini]>arr[j])
                mini=j;
            swap(arr[i],arr[mini]);
    }
}
//pointer version
void selectionsort(int *arr,int len)
{
    register int *p,*minp;
    //pointer to array element and pointer to last elemnt
    int *last=arr+len-1;
    for(;arr<last;++arr)
    {
        minp=arr;
        for(p=arr+1;p<=last;++p)
            if(*minp>*p)
                minp=p;
            swap(*arr,*minp);//swap
    }
}



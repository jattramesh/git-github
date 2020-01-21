//
// Created by Rahul on 6/14/2019.
//
#include <iostream>
using namespace std;
int arr[4]={1,2,3,4};
int main()
{
    cout<<"address and values of array element\n"<<endl;
    char *cptr;
    char town[5]="agra";//town=*town
    cout<<(void*)town+1<<endl;
    cptr="rahul";
    cout<<cptr<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"address"<<(void*)(town+i)<<"char address "<<*(town+i)<<"address"<<arr+i<<"values"<<*(arr+i)<<endl;
    }
}


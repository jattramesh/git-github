//
// Created by Rahul on 6/15/2019.
//
#include <iostream>
using namespace std;
int main(int argc,char *argv[],char *env[])
{
    cout<<"program"<<argv[0]<<endl;
    cout<<"\n command line arguments "<<endl;
    int i;
    for(i=1;i<argc;++i)
        cout<<argv[i]<<endl;
    cout<<"type <return> to go on"<<endl;
    cin.get();
    cout<<"\n environment strings"<<endl;
    for(i=0;env[i]!=NULL;++i)
        cout<<env[i]<<endl;

}


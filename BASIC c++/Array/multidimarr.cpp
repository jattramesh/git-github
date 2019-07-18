//
// Created by Rahul on 6/13/2019.
//
#include <iostream>
#include <iomanip>
using namespace std;
char repre[2][20]={"aramstrong,weedy",
                   "beauty,eve"};
//each representative has five diffrent article avialiable having slod by folowing g
int articleCount[2][5]={
        {20,51,22,3,3,4},
                        {1222,333,3,3,3}
};
int main()
{
    for(int i=0;i<2;i++)
    {
        cout<<"\n representative "<<repre[i];
        cout<<"\n number of items sold";
    for(int j=0;j<5;j++)
        cout<<setw(6)<<articleCount[i][j];
    cout<<endl;

    }
}
//
// Created by Rahul on 6/13/2019.
//
#include <iostream>
#include <iomanip>
using namespace std;
#define LIMIT 1000
bool flag[LIMIT]={false, false};
int main()
{
    register  int i,j;
    for(i=2;i<LIMIT;++i)
        flag[i]=true;
    for(i=2;i<LIMIT;++i)
    {
        if(flag[i])
        {
            for(j=i+i;j<LIMIT;j+=i)
                flag[j]=false;
        }
    }
    int count=0;
    //to count
    for(i=2;i<LIMIT;++i)
        if(flag[i])
            ++count;
    //output
    cout<<"there are"<<count<<"prime number less than "<<LIMIT<<endl;
    cout<<"\n to output prime number ? (y/n)";
    char reply; cin.get(reply);
    if( reply == 'y' || reply == 'Y')
    { for( i = 2; i < LIMIT; ++i)
            if(flag[i]) // If i is a prime number
            { // -> to output it.
                cout.width(8); cout << i;
            }
    }

}

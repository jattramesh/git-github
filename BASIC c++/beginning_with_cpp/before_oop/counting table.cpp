// MultTable.cpp
// Outputs a multiplication table.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int i,j;
cout<<"1\t";
for(i=1;i<11;i++)
cout<<i<<"\t";
cout<<endl;
cout<<"---------------------------------------------------------------------------------"<<endl;
for(j=1;j<=10;j++)
{
{
cout<<j<<"|\t";
for(i=1;i<=10;i++)
cout<<j*i<<"\t";
}
cout<<endl;
}
}

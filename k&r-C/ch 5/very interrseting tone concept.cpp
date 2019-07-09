#include<iostream>
#include<iomanip>
using namespace std;
const long delay=100000000L;
int main()
{
  int  tic;
  int i;
  cout<<"\n How often should the tone be output?";
  cin>>tic;
  do{
    for(i=0;i<delay;++i)
    ;
    cout<<"now the tone!\a"<<endl;
  }
  while(--tic>0);
  cout<<"end of the acoustic interlude!\n";
  return 0;
}

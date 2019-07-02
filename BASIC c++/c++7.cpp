#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  long euro,maxEuro;
  double rate;
  cout <<"\n ***Table of exchamge ***"<<"Euro -- US $*\n\n";
  cout<<"\n plaese give the rate of exchange ::" "one Euro in US $";
  cin>>rate;
  cout<<"\n please enter maximum euro ";
  cin>>maxEuro;
  cout<<'\n'<<setw(12)<<"Euro"<<setw(20)<<"US $ "<<"\t\t Rate "<<rate<<endl;

long lower,upper,step;
for(lower=1,step=1;lower<=maxEuro;step*=10,lower=2*step)
for(euro=lower,upper=step*10;euro<=upper&&euro<=maxEuro;euro+=step)
cout<<setw(20)<<euro<<setw(20)<<euro*rate<<endl;
return 0;
}

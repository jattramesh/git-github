#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int ac=32;
  while(true){
    cout<<"\n charcter    decima;l hexadecimal \n\n";
    int upper;
    for(upper=ac+20;ac<upper&&ac<256;++ac)
    cout<<"   "<<char(ac)<<setw(10)<<dec<<ac<<setw(10)<<hex<<ac<<endl;
    if(upper>256)
    break;
    cout<<"\n Go on -> <return>,stop-> <q>+<return>";
    char answer;
    cin.get(answer);
    if(answer=='q'||answer=='Q')
    break;
    cin.sync();

  }
  return 0;
}

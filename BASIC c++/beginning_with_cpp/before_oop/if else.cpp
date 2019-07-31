#include<iostream
using namespace std;
int main()
{
  float x,y,min;
  cout<<"enter two diffrenent number:\n";
  if(cin>>x&&cin>>y)
  {
    if(x<y)
    min=x;
    else
    min=y;
    cout<<"\n The smaller number is : "<<min<<endl;
  }
  else
  cout<<"invalid input!"<<endl;
  return 0;
}

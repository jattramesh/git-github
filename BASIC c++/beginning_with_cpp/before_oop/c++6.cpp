#include<iostream> //cout.setf( ios::showpos);
using namespace std;
int main()
{
  int number;
  cout<<"please enter an integer: ";
  cin>>number;
  cout.setf(ios::uppercase,ios::showpos);
  cout<<uppercase<<"octal \t decimal \t hexadecimal\n";
  cout<<oct<<number<<"\t"<<dec<<number<<"\t"<<hex<<number<<endl;
cout<<dec<<showpos<<number<<endl;
cout<<hex<<11<<endl;
}

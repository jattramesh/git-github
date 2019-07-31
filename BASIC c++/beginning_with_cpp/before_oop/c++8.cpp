#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
  int number=' ';
  cout<<"the white space code is follows"<<number<<endl;
  char ch;
  string prompt="\n please enter a charcter followed by ""<return>:";
  cout<<prompt;
  cin>>ch;
  number=ch;
  cout<<"the charcter "<<ch<<" has code "<<number<<" "<<endl;
  cout<<uppercase<<"octal decimal hexadecimal\n"<<oct<<setw(8)<<number
  <<dec<<setw(8)<<number<<hex<<setw(8)<<number<<endl;
  string a("hey boys");
  cout<<left<<setfill('?')<<setw(20)<<a<<endl;
  bool ok=true;
  cout<<ok<<endl;
  cout<<boolalpha<<ok<<endl;
  cout<<noboolalpha<<ok<<endl;
  string label;
  double price;
  cout<<"\n please enter the article label";
  cin>>setw(16);
  cin>>setfill('8')>>label;
  cin.sync();  //clears the buffers and reset
  cin.clear();//wait even more than 15 chazrctyer has been input
  cout<<"neter the price of article :";
  cin>>price;
  //controlling output
  cout<<fixed<<setprecision(3)<<"\n Article "<<label<<"\n price"<<price<<endl;
return 0;
}

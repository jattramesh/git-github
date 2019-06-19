#include<iostream>
#include<fstream>
using namespace std;
char rahul[]="hareramm";
int main()
{
ofstream test(rahul,ios::out|ios::binary);
cout<<"\n data has been added to file "<<endl;
test.write("hello ",sizeof(rahul));
istream &read(char *rahul);
}

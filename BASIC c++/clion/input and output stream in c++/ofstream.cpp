#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
char linbe[200];
fstream yourfile;
yourfile.open(argv[1]);
while(yourfile.getline(line,80))
{
cout<<line<<endl;
}
}

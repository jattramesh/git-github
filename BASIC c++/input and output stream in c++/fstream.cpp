#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
char line[200];
fstream yourfile;
yourfile.open("showfile.cpp");
while(yourfile.getline(line,80))
{
cout<<line<<endl;
}
}

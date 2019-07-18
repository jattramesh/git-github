#include<iostream>
#include<cstring>
using namespace std;
#define MAX 200
char line[500];
int main(int argc,char *argv[])
{
if(argc!=2)
{
cerr<<"call search pattern[<text.dat]"<<endl;
return 1;
}
int lineNr=0;
while(cin.getline(line,MAX))
{
++lineNr;
if(strstr(line,argv[1])!=NULL)
{
cout.width(3);
cout<<lineNr<<":"<<line<<endl;
}
}
return 0;
}

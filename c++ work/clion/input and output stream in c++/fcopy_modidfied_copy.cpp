#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>
using namespace std;
char usage[]="call:fcopy [source[destination]";
inline void openerror(const char *file)
{
cerr<<"error opening the file"<<file<<endl;
}
bool copy(istream &is,ostream& os),ok=true;
int main(int argc,char *argv[])
{
char source[256]="",dest[256]="";
switch(argc)
{
case 1:             //no file declared
cout<<"copying source file to destination file! \n"<<endl;
cin.getline(source,256);
if(strlen(source)==0)
{
cerr<<"no source efile declared "<<endl;
return 1;
}
cin.sync(); //no previous input
cout<<"destination file";
cin.getline(dest,256);
break;
case 2:                  //one file is declared
strcpy(source,argv[1]);
break;
case 3: //source and destinayion file are declared
strcpy(source,argv[1]);
strcpy(dest,argv[2]);
break;
default:
cerr<<usage<<endl;
return 2; //exit(2)
}
if(strlen(dest)==0)  //only souce file ?
{
ifstream infile(source);//yes=> output to cout
if(!infile)
openerror(source);
ok=copy(infile,cout);
//the file is closed by ifstream
}
else
{
ifstream infile(source,ios::in | ios::binary);
if(!infile)
openerror(source);
else
{
ofstream outfile(dest,ios::out|ios::binary);
if(!outfile)
openerror(dest);
 ok=copy(infile,outfile);
 if(ok)
 cerr<<"file"<<source<<"to file"<<dest<<"copied"<<endl;
}
}
if(!ok)
{
cerr<<"error while copying "<<endl;
return 3;
}
return 0;
}
bool copy(istream& is,ostream& os) //to copy is to os
{
const int buffsize=1024;
char buf[buffsize];
do
{
is.read(buf,buffsize);
if(is.gcount()>0)
os.write(buf,is.gcount());
}
while(!is.eof() && !is.fail()&&!os.fail());
if(is.eof())
return false;
else
return true;
}


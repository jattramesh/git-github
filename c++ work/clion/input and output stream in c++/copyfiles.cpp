#include<iostream>
#include<fstream>
using namespace std;
inline void openerror(const char *file)
{
cerr<<"error on opening the file"<<file<<endl;
exit(1);
}
void copy(istream &is,ostream &os);
int main(int argc,char *argv[])
{
if(argc<2 ||argc >3)
{
cerr<<"call: fcopy1 source destination "<<endl;
return 1;
}
ifstream infile(argv[1]);  //opem first file
if(!infile.is_open())
openerror(argv[1]);
if(argc==2)
copy(infile,cout);     //just one file
else
{
ofstream outfile(argv[2]);  //open 2nd file
if(!outfile.is_open())
openerror(argv[2]);
copy(infile,outfile);
outfile.close();
}
infile.close();
return 0;
}
void copy(istream &is,ostream &os)
{

char c;
while(is.get(c))
os.put(c);
}

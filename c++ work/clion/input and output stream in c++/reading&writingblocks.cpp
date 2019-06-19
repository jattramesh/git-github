#include<iostream>
#include<fstream>
using namespace std;
char header[]="***********p I Z Z A P R O N T O ****\n\n";
//record structure
struct Pizza
{
char name[32];
float price;
};
const int MAXCNT=10;
Pizza pizzamenu[MAXCNT]=
{{"pepperoni",9.90},{"white pizza",15.90},{"ham pizza",12.50f},{"calzone ",14.90f}};
int cnt=4;
char pizzafile[256]="pizza.fle";
int main()
{
cout<<header<<endl;
//to write data into file
int exitcode=0;
ofstream outfile(pizzafile);
if(!outfile)
{
cerr<<"ertror opening the files "<<endl;
exitcode=1;
}
else
{
for(int i=0;i<cnt;++i)
if(!outfile.write((char*)(&pizzamenu[i]),sizeof(Pizza)))
{
cerr<<"error writing !"<<endl;
exitcode=2;
}
}
if(exitcode==0)
cout<<"\n data has been added to file "<<pizzafile<<"\n "<<endl;
return exitcode;
}

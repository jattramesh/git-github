//demonstrating block by block of result of record
#include"pizza.h"
char pizzafile[256]=FILENAME;
int main()
{
header();
ifstream infile(pizzafile,ios::in|ios::binary);
if(!infile)
{
cerr<<"pizzafile file doesnot exit"<<endl;
return 1;
}
pizza onepizza;
int cnt=0;
cout<<"\n ------------------------------------------"<<"\n aviliable pizza"<<endl;
cout<<fixed<<setprecision(2);
while(true)
if(!infile.read((char *)&onepizza,sizeof(onepizza)))
break;
else
{
cout<<setw(20)<<onepizza.name<<setw(10)<<onepizza.price<<endl;//serious doubt to be solve
++cnt;
}
if(!infile.eof())
{
cerr<<"error reading file "<<endl;
return 2;
}
else
cerr<<"these are "<<cnt<<"pizza"<<endl;
return 0;
}

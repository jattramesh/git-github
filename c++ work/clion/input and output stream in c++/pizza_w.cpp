//demonstrating blockwise writing of records
#include"pizza.h"
pizza pizzamenu[MAXCNT]
{
{"peperoni",9.9f},{"white pizza",15.9f},{"ham pizza",12.5f},{"calzone",14.9f};
};
int cnt=4;
char pizzafile[256]=FILENAME;
int main()
{
int i;
header();
cout<<"our standard offer \n"<<endl;
cout<<fixed<<setprecision(2);
for(i=0;i<cnt;++i)
{
cout<<setw(20)<<pizzamenu[i].name<<setw(20)<<pizzamenu[i].price<<endl;
cout<<"\n --------------------------------\n"<<endl;
}
//input more pizza by keyboard
while(cnt<MAXCNT)
{
cin.sync();cin.clear();
cout<<"whaat pizza should be added "<<"to main menu ? \n\n"<<"name ?";
cin.getline(pizzamenu[cnt].name,32);
if(pizzamenu[cnt].name[0]=='\0')
break;
cout<<"price ";
cin>>pizzamenu[cnt].price;
if(!cin)
cerr<<"invalid input"<<endl;
else
++cnt;
if(cnt<MAXCNT)
cout<<"\n and the next pizza! \n"<<"sto[p with return "<<endl;
}
//add data to file
int exitcode=0;
ofstream outfile(pizzafile,ios::out| ios::binary);
if(!outfile)
{
cerr<<"error opening the file!\n";
exitcode=1;
}
else
{
for(int i=0; i<cnt;++i)
if(!outfile.write((char*)&pizzamenu[i],sizeof(pizza)))
{
cerr<<"error writing to file !"<<endl;
exitcode=2;
}
}
if(exitcode==0)
{
cout<<"data has successfully written"<<endl;
}
return 0;
}

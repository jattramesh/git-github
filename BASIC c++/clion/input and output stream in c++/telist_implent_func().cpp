#include"tellist.h"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>
using namespace std;
inline void tabheader()
{
cout<<"telephone directory"<<endl;
}
bool tellist::append(const string &name,const string& telnr)
{
if(count<MAX && name.length()>1 && search(name)==PSEUDO)
{
v[count].name=name;
v[count].telnr=telnr;
++count;
dirty=true;
}
return false ;

}
bool tellist::erase(const string& key)
{
int i=search(key);
if(i!=PSEUDO)
{
if(i!=count-1)
v[i]=v[count-1];
--count;
dirty=true;
return true;
}
return false;
}
bool tellist::load()
{
cout<<"load the telephobe list\n";
cout<<"from a file "<<endl;
string file;
cin.sync();cin.clear();
getline(cin,file);
if(file.empty())
{
cerr<<"no file name found ";
return false;
}
//open the file for reading g
ifstream infile(file.c_str(),ios::in|ios::binary);
if(!infile)
{
cerr<<"file"<<file<<"could not be opened";
return false ;
}
int i=0;
while(i<MAX)
{
getline(infile,v[i].name,'\0');
getline(infile,v[i].telnr,'\0');
if(!infile)
break;
else
i++;
}
if(i==MAX)
cerr<<"maximum capacity"<<MAX<<"has ben reached "<<endl;
else if(!infile.eof())
{
cerr<<"error reading file "<<file<<endl;
return false ;

}
count=i;
filename=file;
dirty=false;
return true;
}
bool tellist::saveas()
{
cout<<"save the telephone list in file "<<"\nfile:";
string file;
cin.sync();
cin.clear();
getline(cin,file);
if(!setfilename(file))
{
cerr<<"no file name declared"<<endl;
return false;
}
else
return save();
}
bool tellist::save()
{
if(filename.empty())
return saveas();
if(!dirty)
return true;
ofstream outfile(filename.c_str(),ios::out| ios::binary);
if(!outfile)
{
cerr<<"filename"<<filename<<"could not be opened "<<endl;
return false;
}
int i=0;
while(i<count)
{
outfile<<v[i].name<<'\0'<<endl;
outfile<<v[i].telnr<<'\0'<<endl;
if(!outfile)
break;
else
i++;
}
if(i<count)
{
cerr<<"error while reading the file "<<filename<<endl;
return false;
}
dirty=false;
return true;
}
inline void printline(const element &el){
cout<<left<<setw(30)<<el.name.c_str()<<left<<setw(20)<<el.telnr.c_str()<<endl;
}
void tellist::print()
{
if(count==0)
cout<<"\n the telephone list is empty"<<endl;
else
{
for(int i=0;i<count;++i)
printline(v[i]);
}
}

int tellist::print(const string& name) const //entry begaining with name
{
int matches=0;
int len=name.length();
for(int i=0; i<count;++i)
{
if(v[i].name.compare(0,len,name)==0)
{
if(matches==0)
tabheader();
++matches;
printline(v[i]);
}
}
if(matches==0)
cout<<"no corresponding entry found";
return matches;
}
int tellist::getnewentry()
{
int inputcount=0;
cout<<"\n enter new names and telephone number"<<"terminater by empty input"<<endl;
element el;
while(true)
{
cout<<"\n new last namew ,first name ";
cin.sync();
getline(cin,el.name);
if(el.name.empty())
break;
cout<<"telephone number"<<endl;
cin.sync();
getline(cin,el.telnr);
if(!append(el.name,el.telnr))
{
cout<<"the name has benn not found "<<endl;
if(count==MAX)
{
cout<<"the table is full "<<endl;
break;
}
if(search(el.name)!=PSEUDO)
cout<<"name already exit "<<endl;
}
else
{
++inputcount;
cout<<"a new elemnt has benn inserted"<<endl;
}
}
}

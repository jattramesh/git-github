#ifndef OBJ_PERSISTANCE_H_INCLUDED
#define OBJ_PERSISTANCE_H_INCLUDED
#include<string>>
#include<iostream>
#include<fstream>
using namespace std;
class Account
{
private:
string name;
unsigned long nr;
double balance;
public:
Account(const string&,unsigned long,double);
Account();
ostream& Account::write(ostream &os) const;
istream& Account::read(istream& is);
};
//write outputs an account into the given stream os
//returns the given stream
ostream& Account::write(ostream &os) const
{
os<<name<<'\0';//to erite a string
os.write((char*)&nr,sizeof(nr));
os.write((char*)&balance,sizeof(balance));
return os;
}
//read() is the opposite function of write().
//read() inputs an accounts from the stream is and writes it into the member of the of current object
istream& Account::read(istream& is)
{
getline(is,name,'\0');  //read a string
is.read((char *)&nr,sizeof(nr));
is.read((char *)&balance,sizeof(balance));
return is;
}
#endif // OBJ_PERSISTANCE_H_INCLUDED

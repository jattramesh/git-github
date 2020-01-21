#include <iostream>
#include <string>
using namespace std;
bool getclient(string& name,long& nr);
void putclient(const string& name, const long& nr);
int main()
{
    string clientname;
    long clientnr;
    cout<<"to input and output client data"<<endl;
    if(getclient(clientname,clientnr))
putclient(clientname,clientnr);
else
    cout<<"invalid input "<<endl;
}
bool getclient(string &name,long &nr)
{
    cout<<"input client data\n";
    if(!getline(cin,name))
        return false;
    cout<<"number\n";
    if(!(cin>>nr))
        return false;
    return true;
}
void putclient(const  string &name,const long& nr)
{
    cout<<"\n client data \n";
    cout<<"\n name "<<name<<endl;
    cout<<"\n number "<<nr<<endl;
}
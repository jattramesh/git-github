#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;
long timediff(void);
static string secret ="ISUS";
static long maxcount=3;
static long maxtime=60;
bool getpasaword()
{
    bool ok_flag=false ;
    string word;
    int count =0,time=0;
    while(ok_flag !=true && ++count<=maxcount)
{
        cout<<"input password"<<endl;
        cin.sync();
        cin>>setw(10)>>word;
        time+=timediff();
        if(time>=maxtime)
            break;
        if(word!=secret)
            cout<<"invalid input"<<endl;
        else
            ok_flag=true;
        }
    return ok_flag;
}
long timediff()
{
  static   long long  sec=0;
    long oldsec=sec;
    time(&sec); //read new time
    return(sec - oldsec);
}
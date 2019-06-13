#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class CD
{
private:
    string interpret,title;
    long second;
public:
    CD(const string &i="",const string t="",long s=0l)
    {
        interpret=i;
        title=t;
        second =s;
    }
    const string &getinterpret() const{return interpret;}
    const string &gettitle() const {return title;}
    long getsecond() const {return second;}
};
//generates object of class cd and op in table form
void printline(CD cd); //passing object as function argument
int main()
{
    CD cd1("MISTER X","LET's dance ",30*60+41),cd2("new guitars ","flamingo",2771);
    CD cd3,cd4;
    cd3=cd1;
    cd4=cd2/* default constructor*//*assignment*/;
    string line(50,'-');
    cout<<line<<setw(20)<<"interpreater"<<left<<setw(30)<<"title"<<'\t'<<"length (min:sec)"<<line<<endl;
    printline(cd4);
    printline(cd3);
}
void printline(CD cd)
{
    cout<<left<<setw(20)<<cd.getinterpret()<<setw(20)<<cd.gettitle()<<right<<setw(5)<<cd.getsecond()/60<<':'<<cd.getsecond()%60<<endl;
}

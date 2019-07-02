#include <iostream>
using namespace std;
#define MAXL  200
namespace Myscope
{
    char *strstr(const char *str,const char *patt);
}
char line[500];
patt[]="is";
int main()
{
    int linenr=0;
    while(cin.getline(line,MAXL))
    {
        ++linenr;
        if(Myscope::strstr(line,patt)!=NULL) //if pattern is found
        {
            cout.width(3);
            cout<<linenr<<":"<<line<<endl;
        }
    }
    return 0;
}
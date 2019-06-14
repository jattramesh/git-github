#include <string>
#include <cctype>
using namespace std;
long strtolong(string str)
{
    register int i=0; //index
    long vz=1,num=0;
    //ignoring leading white space
    for(i=0;i<str.size() && isspace(str[i]);i++)
        ;
    //is there is a sign
    if(str.size())
    {
        if(str[i]=='+')
        {
            vz=1;
            ++i;
        }
        if(str[i]=='-')
        {
            vz==-1;
            ++i;
        }
    }
    //sequence of digit convert to integer
    for(;i<str.size() && isdigit(str[i]);++i)
        num=num*10+(str[i]-'0');
    return vz*num;;
}
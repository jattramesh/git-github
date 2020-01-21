#include<iostream>
using namespace std;
#include <string.h>
class array
{
    char *p;
    int len;
public:
    array(){len=0;p=0;}
    array (const char *s);
    array (const array &s);
    ~array()
    {
        delete(p);
    }
    friend array operator+(const array &s,const array &t);
    friend int operator <=(const array &s,const array &t);
    friend void show(const array s);
};
void show (const array s)
{
    cout<<s.p;
}
array::array (const char  *s)
{
    len=strlen(s);
    p=new char [len+1];
    strcpy(p,s);
}
array::array(array const & s)
{
    len=s.len;
    p=new char[len+1];
    strcpy(p,s.p);
}
array operator+(const array &s,const array &t)
{
    array c;
    c.len=s.len+t.len;
    c.p=new char[c.len+1];
    strcpy(c.p,s.p);
    strcat(c.p,t.p);
    return(c);
}
int  operator <=(const array &s,const array &t)
{
    int m=strlen(s.p);
    int n=strlen(t.p);
    if(m<n)
        return 1;
    else
        return 0;
}
int main()
{
array s1="new";
    array s2="York";
    array  s3="delhi";
    array t1,t2,t3;
    t1=s1;
    t2=s2;
    t3=s1+s3;
    cout<<"\n t1";
    show(t1);
    cout<<"\n t2";
    show(t2);
    cout<<"\n t3";
    show(t3);
}

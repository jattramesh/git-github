#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char c;
    long nchar=0;
    long ncov=0;
    while(cin.get(c))
    {
        ++nchar;
        if(islower(c))
        {
            c=toupper(c);
            ++ncov;
        }
        cout.put(c);
    }
    clog<<"\n total number of charcter "<<nchar<<"\n total of conversed charcter "<<ncov<<endl;
    return 0;
}

#include <iostream>
#include <string>
#include <cctype>  //for toupper
using namespace std;
void strtoupper(string );
int main()
{
    string text("test with assignment \n");
    strtoupper(text);
    cout<<text<<endl;
    strtoupper(text="flower");
    cout<<text<<endl;
    strtoupper(text+="cheer up you");
    cout<<text<<endl;
    return 0;
}
void strtoupper(string str)
{
    int len=str.length();
    for(int i=0;i<len;i++)
        str[i]=toupper(str[i]);
}
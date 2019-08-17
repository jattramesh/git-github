#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    char ch;
    char string[80];
    cout<<"enter a string"<<endl;
    cin>>string;
    cout<<string<<"cout";
    int len=strlen(string);
    cout<<len<<"testing";
    fstream file;
    file.open("Text",ios::in | ios::out);
    for(int i=0;i<len;i++)
    {
        file.put(string[i]);
    }
    file.seekg(0);
    while(file)
    {
        file.get(ch);
        cout<<ch<<"tst";
    }
    return 0;
}

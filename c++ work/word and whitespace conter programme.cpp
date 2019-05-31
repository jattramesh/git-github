
#include<iostream>
#include<string>
#include<cctype> //use for macro is space
using namespace std;
int main()
{
    string header(" **/******count words ******\n"),prompt("enter  a text and terminate  " "with a period and return :"),line(60,'-'),text;
    cout<<header<<endl<<prompt<<endl<<line<<endl;
int  c;
    //count words and white spaces
    int i,//index
    nspace=0,nword=0;
    bool fspace=false ; //flag for white space
    getline(cin,text);
    for(i=0;i<text.length();++i)
    {
        if(isspace(text[i])) //whitespace
        {
            ++nspace;
            fspace=true;
        }
        else if(fspace)
        {
            ++nword;
            fspace=false;
        }
    }

    cout<<line<<endl<<"words"<<nword<<"white space "<<nspace<<endl;
    return 0;
}

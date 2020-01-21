#include<iostream>
#include<string>
using namespace std;
string prompt("enter a line "),line(50,'*');
int main()
{
    string text;
    cout<<line<<endl<<prompt<<endl;
    getline(cin,text);
    cout<<line<<endl<<"your text is  "<<text.size()<<
    "charcter long "<<endl;
    string s2(text);
    string start(text,0,10);//copying text to start
    cout<<"your text:\n"<<s2<<endl;
    text="1234567890";
    cout<<line<<endl<<"the first 10 charcters are "<<start<<endl<<text<<endl;

}

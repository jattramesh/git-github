#include<iostream>
#include<string>
using namespace std;
string prompt="please enter two lines of text!\n",line(30,'-');
int main()
{
    string line1,line2,key="y";
    while(key=="y" || key=="Y")
    {
        cout<<line<<'\n'<<prompt<<line<<endl;
        getline(cin,line1);
        getline(cin,line2);
        if(line1==line2)
        cout<<"both lines arer same "<<endl;
        else
        {
            cout<<"the samaller line is :\n\t";
            cout<<(line1<line2 ? line1 :line2)<<endl;
            int len1=line1.length();
            int len2=line2.length();
            if(len1==len2)
            cout<<"both lines havce3 same length \n";
            else
            {
                cout<<"shorter line is "<<(len1<len2 ? line1 : line2)<<endl;
            }
        }
        cout<<"repeat? (y/n)";
         do
         getline(cin,key);
         while(key=="y"&&key=="Y");
        }
    }

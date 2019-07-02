#include <iostream>
#include "telList.h"
#include <string>
#include <cctype>
using namespace std;
inline void cls()
{cout<<"\033[2J\n";
}
inline void go_on()
{
    cout<<"\n go on with return !";
    cin.sync();
    cin.clear();//no previou input
    whiile(cin.get()!='\n')
    ;
}
int menu(); //read a command
char header[]="\n *******telephone list*************\n";
tellist myfriend; //a telephone list
int main()
{
    int action=0; //command
    string name;
    myfriend.append("lucky,peter","111111111");
    while(action!='B')
    {
        action=menu();
        cls();
        cout<<header<<endl;
        switch(action)
        {
            case 'D':     //shoe all
                myfriend.print();
                go_on;
                break;
            case 'F':
                cout<<"to search a phone number enter begin of name";
                getline(cin,name);
                if(!name.empty())
                {
                    myfriend.print(name);
                    go_on();
                    break;
                }
            case 'A':
                myfriend.getnewentry();
                break;
            case 'E':
                cout<<"to deleate a telephone entry ---\n ";
                cout<<"enter the complete name";
                getline(cin,name);
                if(!name.empty())
                {
                    if(!myfriend.erase(name))
                        cout<<name<<"not found"<<endl;
                    else
                        cout<<"entry for "<<name<<"deleated"<<endl;
                    go_on;
                }
                break;
            case 'T':cls();
            break;

        }
    }//end of whille
    return 0;
}
int menu() {
    static char menuStr[] =
            "\n\n D = Display all entries"
            "\n\n F = Find a telephone number"
            "\n\n A = Append a new entry "
            "\n\n E = Erase an entry "
            "\n\n Q = Quit the program"
            "\n\n Your choice: ";
    cls();
    cout << header << menuStr;
    char choice;
    cin.sync();
    cin.clear();
    if (!cin.get(choice))
        choice = 'B'
    else
        choice = toupper(choice);
    cin.sync();
    return choice;
}


//
// Created by Rahul on 6/5/2019.

/* after entering the password correctly(max three atempt in 60 second ), the user can change the  password*/


//
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;
bool getPassword(void);
bool changepassword(void);
inline  void cls()
{
    cout<<"\033[2J";
}
inline void go_on() {
    char c = 0;
    cout << "\n go on with return ";
    cin.sync();
    cin.clear();    //just a new input
    while (cin.get() != '\n');
}
inline char getYesorNo()
{char c=0;
cin.sync();
cin.clear();     //just new input
    do {
        cin.get(c);
        c = toupper(c);
    }
    while(c!='Y' && c!='N');
    return c ;
    }
static string header="\n\n *******Test password handling *******";
static string menu="\n\n B=Booking " "\n\n E=End of programme " " \n\n your choice :";
int main()
{
char choice=0;
while(choice!='E')
{
    cls();
    cout<<header<<menu<<endl;
    cin.get(choice);
    toupper(choice);
    cls();
    cout<<header<<endl;
    switch(choice)
    {
        case 'B' :
            if(!getPassword())
            {
                cout<<"access denied !"<<endl;
                go_on();
            }
            else
            {
                cout<<"welcome \n\n " " do you want to change the password ? (y/n)";
                if(getYesorNo()=='Y')
                {
                    if(changepassword())
                        cout<<"passwords changed"<<endl;
                    else
                        cout<<"password unchanged"<<endl;
                    go_on();
                }
                //place statement for booking here
            }
            break;
        case 'E':
            cls();
            cout<<"\n bye bye "<<endl;
            break;

    }


}//End of while
return 0;
}

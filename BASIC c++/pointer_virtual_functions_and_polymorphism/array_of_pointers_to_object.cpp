//
// Created by rahul on 7/8/19.
//
#include <iostream>
#include <cstring>
using namespace std;
class  city{
protected:
    char *name;
    int len;
public:
city()
{
  int len=0;
  name = new char[len+1];
}
void getname(void)
{
    char *s;
    s=new char[30];
    cout<<"enter city name";
    cin>>s;
    len=strlen(s);
    name=new char[strlen(s)+1];
    strcpy(name,s);
}
void printname(void)
{
    cout<<name<<endl;
}
};
int main()
{
    city *ptr[10];
    int n=1;
    int option;
    do {
        ptr[n] = new city;
        ptr[n]->getname();
        n++;
        cout << "do you want to enter one more name \n";
        cout << "press 1 for yes or 0 for no";
        cin >> option;
    }
    while(option);
    cout<<"\n\n";
    for(int i=1;i<=n;i++)
    {
        ptr[i]->printname();

    }
    return 0;
}

//
// Created by rahul on 30/7/19.
//
#include <iostream>
#include <cstring>
using namespace std;
class strring{
    char *name;
    int length;
public:
    strring()
    {
        length=0;
        name=new char[length+1];
        
    }
    strring(const char *s)
    {
        length=strlen(s);
        name=new char[length+1]; //one additional chararcter for \0
        strcpy(name,s);
    }
    void display(void)
    {
        cout<<name<<'\n';
        
    }
    void join(strring &a,strring &b);
};
void strring::join(strring &a,strring &b){
    length=a.length+b.length;
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}
int main()
{
    char first[]="rahul";
    char second[20]="louis";
    char third[30]="kullan";
    strring name1(first),name2(second),name3(third);
    strring s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
}

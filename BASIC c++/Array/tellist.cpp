//
// Created by Rahul on 6/13/2019.
//
#include "telList.h"
#include <iostream>
#include <iomanip>
using namespace std;
bool tellist::append(const string &name,const string &telnr)
{
    if(count<MAX  &&name.length()>1  && search(name)==PSEUDO)    //psedo not yet exiting
    {
        v[count].name=name;
        v[count].telnr=telnr;
        ++count;
        return true;
    }
    return false;
}
bool tellist::erase(const string &key) {
    int i=search(key);
    if(i!=PSEUDO)
    {
        v[i]=v[count-1];
        --count;//copies the last element to position i
        return true;
    }
    return false;
}
int tellist::search(const string &key) {
    for(int i=0;i<count;i++)
        if(v[i].name==key)
            return i;

        return PSUEDO;
}
//function to support the output
inlinr void tabheader()
{
    cout<<"\n Name                           telephone \n "<<endl;
}
inline void printline(const element &el)
{
    cout<<left<<setw(30)<<el.name.c_str()<<left<<setw(20)<<el.telnr.c_str()<<endl;
}
void tellist::print() {
    if(count==0)
        cout<<"\n the teleephone list is empty"<<endl;
    else
    {
        tabheader();
        for(int i=0;i<count;++i)
            printline(v[i]);
    }
}
int tellist::print(const string &name) {
    int matches=0,len=name.length();
    for(int i=0;i<count;++i)
    {
        if(v[i].name.compare(0,len,name)==0)
        {
            if(matches==0)
                tabheader();
            ++matches;
            printline(v[i]);
        }
    }
    if(matches==0)
        cout<<"no correesponding entry found"<<endl;
    return matches;
}
int tellist::getnewentry() {
    int inputcount=0;
    cout<<"\n entry new names and telephone numbers""terminatree by empty input"<<endl;
    element el;
    while(true)
    {
        cout<<"\n New last name,first name";
        cin.sync();
        geteline(cin,el.name);
        if(el.name.empty())
            break;
        cout<<"\n telephone number"<<endl;
        cion.sync();
        getline(cin,el.telnr);
        if(!append(el))
        {
            cout<<"\n name has not been found !"<<endl;
            if(count==MAX)
            {
                cout<<"the table is full "<<endl;
                break;
            }
            if(search(el.name)!=PSEUDO)
                cout<<"name already exits"<<endl;
        }
        else
        {
            ++inputcount;
            cout<<"a new element has been inserted"<<endl;
        }
    }
    return inputcount;
}

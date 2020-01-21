//
// Created by Rahul on 6/13/2019.
//

#ifndef ARRAY_TELLIST_H
#define ARRAY_TELLIST_H

#include <string>
using namespace std;
#define PSEUDO -1
#define MAX 100
//type of a list elemnt
struct element
{
    string name,telnr;
};
class tellist
{
private:
    int count;
    element &v[MAX]
public:
    tellist(){count=0;}
    int getcount() const {return count;}
    tellist *retrive(int i)
    {
        return (i>=0 && i<count)? &v[i] : NULL:
    }
    bool append(const element &el)
    {
        return append(el.name,el.telnr);
    }
    bool append(const string &name,const string &telnr);
    bool erase(const string &name);
    int search(const string &name);
    void print();
    int print(const string &name);
    int getnewentry();

};
#endif //ARRAY_TELLIST_H

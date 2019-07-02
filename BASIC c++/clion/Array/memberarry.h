//
// Created by Rahul on 6/13/2019.
//

#ifndef ARRAY_MEMBERARRY_H
#define ARRAY_MEMBERARRY_H

#include <string>
using namespace std;
#define PSUEDO -1
#define MAX 100
struct element{
    string name;
    telNr;
};
class telist
{
private:
    element v[max]; ////array of currentr number of element
    int count;
public:
    telist()
    { count=0;}
    int getcount const (return count;)
    element *retrive(int i) {
        return (i >= 0 && i < count) ? &v[i] : NULL;
    }
    bool append(const string &name,const string& telNr);
    bool erase(const string &name);
    int search(const string &name);
    void print();
    int print(const string &name );
    int getNewEntry();
};

#endif //ARRAY_MEMBERARRY_H

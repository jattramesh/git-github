//a class tellist to represent the list
//containing names and telephone numbers
//the method load,save,saveas serve for loading and saving a teleophone list
#ifndef _tellist_
#define _tellist_
#include<string>
using namespace std;
#define PSEUDO -1  //psuedo position
#define MAX 100  //maximum number of elements
//type of list element
struct element
{
string name,telnr;
};
class tellist{
private:
element v[MAX];//the array and actual number of argument
int count;
string filename;        //filename
bool dirty;  //true if data has been changed but not not save
public:
tellist()
:count(0),filename(""),dirty(false)
{}
int getcount() {return count;}
element *retrive(int i)
{
return(i>=0 && i<count ) ? &v[i] : NULL;
}
bool append(const string& name,const string &telnr);
bool erase(const string &name);
int search(const string &name) const;
void print();
int print(const string &name) const;
int getnewentry();
const string& getfilename() const {return filename;}
bool setfilename(const string&fn)
{
if(fn.empty())
return false;
else
{filename=fn;dirty=true;return true;}
}
bool isdirty() const {return dirty;}
bool load();
bool save();
bool saveas();
};
#endif // _tellist_

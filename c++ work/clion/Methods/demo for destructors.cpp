//
// Created by Rahul on 6/9/2019.
//output con and destructor calls
#include <iostream>
#include <string>
using namespace std;
int count=0;
class demo{
private:
    string name;
public:
    demo(const string&);
    ~demo(); //destructor
};
demo::demo(const string& iname) {
    ++count;
    name=iname;
    cout<<"i am a constructor of "<<name<<endl<<"this is the "<<count<<".object "<<endl;

}
demo::~demo() {
    cout<<"i am the destructor of  "<<name<<'\n'<<"the"<<count<<"object"<<"will be destroyed "<<endl;
    --count;
}
//to initialize and destroy the class demo
demo globalobject("the global  object");
int main()
{
    cout<<"the dfirst stATEment in main()"<<endl;
    demo firstlocalobject("the   local object ");
    {
        demo seclocalobject("the second local object");
        static demo staticobject("the static object");
        /*A destructor is called automatically at the end of an object’s lifetime:
        ■ for local objects except objects that belong to the static storage class, at the
        end of the code block defining the object
        ■ for global or static objects, at the end of the program.*/

        cout<<"\n last stateement wiyth in the the inner block\n"<<endl;
    return 0;
    }

}
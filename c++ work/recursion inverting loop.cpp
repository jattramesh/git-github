//example of recursion
#include <iostream>
void gettput();
using namespace std;
int main()
{
    cout<<"please input a line of text "<<endl;
    gettput();
    cout<<"\n bye"<<endl;
    return 0;
}
void gettput()
{
    char c;
    if(cin.get(c) && c!='\n')
        gettput();
    cout.put(c);
}

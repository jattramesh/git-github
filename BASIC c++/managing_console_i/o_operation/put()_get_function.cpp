#include <iostream>
using namespace std;
int main()
{
    int count=0;
    char c;
    cout<<"input text";
    cin.get(c);
    while(c!='\n')
    {
        cout.put(c);
        c=cin.get();
    }
}
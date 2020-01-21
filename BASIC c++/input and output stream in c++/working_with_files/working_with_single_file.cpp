#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outf("ITEMS.txt");
    cout<<"ENter the item name";
    char name[30];
    cin>>name;
    outf<<name;
    cout<<"enter the item cost";
    float cost;
    cin>>cost;
    outf<<cost<<endl;
    outf.close();
    ifstream inf("ITEMS");
    inf>>name;
    inf>>cost;
    cout<<"\n";
    cout<<"checking";
    cout<<name<<endl;
    cout<<"checking";
    cout<<cost<<endl;
    inf.close();
}

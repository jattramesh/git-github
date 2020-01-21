//
// Created by rahul on 14/8/19.
//
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class INVENTORY
{
    char name[30];
    int code;
    float cost;
public:
    void readdata(void);
    void writedata(void);
};
void INVENTORY::readdata() {
    cout<<"enter the name";cin>>name;
    cout<<"enter code ";cin>>code;
    cout<<"enter cost";cin>>cost;
}
void INVENTORY::writedata() {
    cout<<"Name is"<<name;
    cout<<endl<<"code is"<<code<<endl;
    cout<<"cost is "<<cost;
}
int main()
{
    INVENTORY item[3];
    fstream file;
    file.open("stock.dat",ios::in|ios::out);
    cout<<"enter deTAIL FOR 3 ITEMS";
    for(int i=0;i<3;i++)
    {
        item[i].readdata();
        file.write((char *)&item[i], sizeof(item[i]));
    }
    file.seekg(0);
    cout<<"output \n\n";
    for(int i=0;i<3;i++)
    {
        file.read((char *)&item[i], sizeof(item[i]));
        item[i].writedata();
    }
    file.close();
    return 0;
}
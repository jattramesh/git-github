#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class INVENTORY{
    char name[30];
    int code;
    float cost;
public:
    void getdata()
    {
        cout<<"enter name ";cin>>name;
        cout<<"enter code";cin>>code;
        cout<<"enter cost";cin>>cost;
    }
    void putdata()
    {
        cout<<setw(10)<<name<<setw(10)<<code<<setprecision(2)<<setw(10)<<cost<<endl;
    }
};
int main() {
    INVENTORY item;
    fstream inoutfile;   //input/output stream
    inoutfile.open("stack.dat", ios::in | ios::out);
    inoutfile.seekg(0,ios::beg);
    cout << "Current content of stock" << "\n" << endl;
    while (inoutfile.read((char *) &item, sizeof item)) {
        item.putdata();
    }
    inoutfile.clear();      //turn of eof file
    cout << "\n add an item" << endl;
    item.getdata();
    char ch;
    cin.get(ch);
    inoutfile.write((char *) &item, sizeof item);
    //Display the append file
    inoutfile.seekg(0);
    cout << "content of append file " << endl;
    while (inoutfile.read((char *) &item, sizeof item)) {
        item.putdata();
    }
    //find the number of objrect in file
    int last = inoutfile.tellg();
    int n = 0;
    n=last / sizeof(item);
    cout << "Number of object " << "\n";
    cout << "total bytes in files " << last << "\n";
    /*modify the detail of an item */
    cout << "enter the number to be updates";
    int object;
    cin >> object;
    cin.get(ch);
    int location = (object - 1) * (sizeof(item));
    if (inoutfile.eof())
        inoutfile.clear();
    inoutfile.seekg(location);
    cout << "enter the values of object " << endl;
    item.getdata();
    cin.get(ch);
    inoutfile.write((char *) &item, sizeof item) << flush;
    //show updated file
    inoutfile.seekg(0);
    cout << "content of updated file\n";
    while (inoutfile.read((char *) &item, sizeof item)) {
        item.putdata();
    }
    inoutfile.close();
    return 0;

}


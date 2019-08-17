#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");
    fout<<"USA\n";
    fout<<"UK\n";
    fout<<"South Korea\n";
    fout.close();
    fout.open("capital");
    fout<<"Washington\n";
    fout<<"London\n";
    fout<<"Seoul\n";
    fout.close();
    const int N=80;
    char line[N];
    ifstream fin;
    fin.open("country");
    cout<<"contens of country file "<<endl;
    int i=0;
    while(fin)
    {
        fin.getline(line,N);
        ++i;
        cout<<line;
    }
    fin.close();
cout<<"I"<<i;
fin.open("capital");
while(fin)
{
    fin.getline(line,N);
    cout<<line;
}
fin.close();
}

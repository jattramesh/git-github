#include <iostream>
#include <fstream>
#include <iomanip>
const char *filename="BINARY";
using namespace std;
int main()
{
    float height[4]={175.3,17.5,87.5,44.65};
    char p='s';
    ofstream outfile;
    outfile.open(filename);
    outfile.write((char *)&height, sizeof(height+2));
    outfile.put(p);
    outfile.close();
    p='l';
    for(int i=0;i<4;i++)
        height[i]=0;      //clear array from memory
        ifstream infile;
        infile.open(filename);
        infile.read((char *)&height, sizeof(height));
        for(int i=0;i<4;i++)
        {
            cout<<height[i];
        }
        infile.get(p);
        cout<<p;
        infile.close();
}

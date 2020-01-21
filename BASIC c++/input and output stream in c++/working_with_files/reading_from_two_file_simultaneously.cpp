#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int size = 8000;
    cout<<"\n";
    char line[size];
    ifstream fin1,fin2,fin3;
    fin1.open("country");
    fin2.open("capital");
    fin3.open("reading_from_two_file_simultaneously.cpp");
while(fin3)
{
    fin3.getline(line,size);
    cout<<line;
}
}
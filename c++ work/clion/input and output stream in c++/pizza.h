#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
//structurer of record
struct pizza
{
char name[32];
float price;
};
#define MAXCNT 20
#define FILENAME "pizza.fle"
inline void header()
{
cout<<"*******************P I Z Z A P R O N T O **************\n"<<endl;

}

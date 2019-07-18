//
// Created by Rahul on 6/11/2019.
//

#include "Article.h"
#include <iostream>
#include <iomanip>
using namespace std;
//global counter for object
int count =0;
//define constructor and destructor
Article::Article(long arnum, const string & arname, double sale) {
    setNr(arnum);
    setname(arname);
    setSales(sale);
    cout<<"created object foe article "<<arname<<".\n"<<"this is "<<count<<"article "<<endl;


}
void  Article::print()
{
    long savedFlags=cout.flags();   //to marks the flag
    cout << fixed << setprecision(2)
         << "-----------------------------------------\n"
         << "Article data:\n"
         << " Number ....: " << arnum << '\n'
         << " Name ....: " << arname << '\n'
         << " Sales price: " << sales << '\n'
         << "-----------------"<<endl;
    cout<<"go on by return \n"<<endl;
    cin.get();
}

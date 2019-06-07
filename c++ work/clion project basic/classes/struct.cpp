//
// Created by Rahul on 6/7/2019.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct representative  //defining struct representative
{
    string name;
    double sales;
};
inline void print(const representative& v)
{
    cout<<fixed<<setprecision(2)<<left<<setw(20)<<v.name<<right<<setw(10)<<v.sales<<endl;

}
int main() {
    representative rita, john;
    rita.name = "rita";
    rita.sales = 370.7;
    john.name = "john";
    john.sales = 233.6;
    print(rita);
    print(john);
    cout << "total sales " << rita.sales + john.sales << endl;
    representative *ptr = &john;
    if (john.sales < rita.sales)
        ptr = &rita;
    cout << "\n sales man of the month" << ptr->name << endl;
}

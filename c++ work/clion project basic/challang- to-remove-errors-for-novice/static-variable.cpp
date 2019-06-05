//
// Created by Rahul on 6/4/2019.
//

#include<iostream>
#include<iomanip>
using namespace std;
double x=0.5;
double fun(void);
int main() {
    while (x < 10.0) {
        x += fun();
        cout << "with ion main()" << setw(10) << x << endl;

    }
    return 0;
}
double fun()
{
    static double x=0;
    cout<<"with in func fun()"<<setw(10)<<x++;
    return x;

}

//
// Created by rahul on 9/8/19.
//
#include <iostream>
#include <iomanip>
using namespace std;
ostream & currency(ostream & ls)
{
    ls<<"rs";
    return ls;
}
ostream & form(ostream & ls)
{
    ls.setf(ios::showpos);
    ls.setf(ios::showpoint);
    ls.fill('x');
    ls.precision(2);
    ls<<setiosflags(ios::fixed)<<setw(10);
    ls<<resetiosflags(ios::showpos);
    return ls;
}
ostream & inch(ostream & rahul)
{
    rahul<<"inches";
    return rahul;
}

int main()
{
    cout<<currency<<form<<7864.3;
    cout<<10<<inch;
    return 0;
}

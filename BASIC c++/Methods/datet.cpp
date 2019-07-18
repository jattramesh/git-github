//
// Created by Rahul on 6/11/2019.
//using obectb ogf classs DATE
#include "DATE.h"
#include <iostream>
using namespace std;
int main() {
    date today, birthday(1, 29, 1927);
    const date d2010(1, 1, 2010);
    cout << "\n Brights birthday" << birthday.asString() << endl;
    today.setdate();
    cout << "\n todays date " << today.asString() << endl;
    if (today.isless(d2010))
        cout << "good luck for this decade \n" << endl;
    else
        cout << "see you in next decades " << endl;
    date holiday;
    int month, day, year;
    char c;
    cout << "\n when will my n ext vacation start \n" << "enter in month-day-year format :: ";
    if (!(cin >> month >> c >> day >> c >> year))
        cerr << "invalid input " << endl;
    else if (!holiday.setdate(month, day, year))
        cerr << "invalid date" << endl;
    else {
        cout << "your first vacation ";
        holiday.print();
        if (today.getyear() < holiday.getyear())
            cout << "you will go omn holiday this year" << endl;
        else
            cout << "you have a nice trip";
    }
    return 0;
}

//
// Created by Rahul on 6/11/2019.
//

#ifndef METHODS_DATE_H
#define METHODS_DATE_H//providing new functionality of date

#include <string>
using namespace std;
class date
{
private:
    short month,day,year;
public:
    date()
    {
        month=day=year=1;
    }
    date(int month,int day,int year)
    {
        if(!setdate(month,day,year))
            month=day=year=1; //idf date id invalid

    }
    void setdate(); //set the current date
    bool setdate(int month,int day,int year);
    int getmonth() {return month;}
    int getday()  {return day;}
    int getyear() {return year;}
    bool isEqual(const date & d) const
    {
        return month==d.month && day==d.day && year==d.month;
    }
    bool isless(const date& d ) const;
    const string& asString() const;
    void print(void) const;
};
inline bool date::isless(const date& d) const{
    if (year != d.year)
        return year < d.year;
    else if (month != d.month)
        return month < d.month;
    else
        return day < d.day;
}
inline bool isLeapyear(int year)
{
    return ((year%4==0) && year%400==0);
}
#endif //METHODS_DATE_H




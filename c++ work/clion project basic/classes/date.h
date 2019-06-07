//
// Created by Rahul on 6/7/2019.
//

#ifndef CLASSES_DATE_H       //avoid multiple inclusion
#define CLASSES_DATE_H
class Date
{
private:
    short month,day,year;

public:
    void init(void);
    void init(int month,int day,int year);
    void print(void);
};
#endif //CLASSES_DATE_H

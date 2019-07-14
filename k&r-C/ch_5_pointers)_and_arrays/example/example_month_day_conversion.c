//
// Created by rahul on 11/7/19.
//
static char daytab[2][13]={
{0,31,28,31,30,31,30,31,31,30,31,30,31},
{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
/*day of year from month and day
 * /
 * */
int day_of_year(int year,int month,int day)
{
    int i,leap;
    leap=year%4==0;
    for(i=1;i<month;i++)
        day+=daytab[leap][i];
    return day;
}
/*month day :set month and day from the day of year/*/
void month_day(int year,int yearday,int *pmonth,int *pday) {
    int i, leap;
    leap = year % 4 == 0;
    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];
    *pmonth = yearday;
    *pday = i;
}
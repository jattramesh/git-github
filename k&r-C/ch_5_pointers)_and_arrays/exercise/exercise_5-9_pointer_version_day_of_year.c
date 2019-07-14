//
// Created by rahul on 11/7/19.
//
#include <stdio.h>
static char daytab[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int day_of_year(int year,int month,int day)
{
    int leap;
    char *p;
    leap=year%4==0;;
    p=daytab[leap];
    while(--month)
        day+=*++p;
    return day;
}
void month_day(int year,int yearday,int *pmonth,int *pday)
{
    int leap;
    char *p;
    p=daytab[leap];
    printf("%p",p);
    while(yearday>*++p)
        yearday-=*p;
    *pmonth=p-*(daytab+leap);
    *pday=yearday;
}
int main()
{
    int main(void)
    {
        int year, month, day, yearday;

        year = 2000;
        month = 3;
        day = 1;
        printf("The date is: %d-%02d-%02d\n", year, month, day);
        printf("day_of_year: %d\n", day_of_year(year, month, day));
        printf("day_of_year_pointer: %d\n",
               day_of_year(year, month, day));


        yearday = 61;	/* 2000-03-01 */
        month_day(year, yearday, &month, &day);
        printf("Yearday is %d\n", yearday);
        printf("month_day: %d %d\n", month, day);
        month_day(year, yearday, &month, &day);
        printf("month_day_pointer: %d %d\n", month, day);

        return 0;
    }
}

#include<stdio.h>
static char daytab[2][13]={
  {0,31,28,31,30,31,30,31,31,30,31,30,31},
  {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int day_of_year(int year,int month,int day)
{
  int i,leap;
  leap=year%4==0 && year%100 !=0;
  for(i=0;i<month;i++)
  {
    day+=daytab[leap][i];
  }
  return day;
}
void month_day(int year,int yearday)
{
  int pmonth,pday;
  int i,leap;
  leap=year%4==0 && year%100 !=0;
  for(i=1;yearday>daytab[leap][i];i++)
  yearday-=daytab[leap][i];
  pmonth=i;
  pday=yearday;
  printf("\n%d\n%d",pmonth,pday);
}
int main()
{
  printf("%d",day_of_year(2018,2,1));
  month_day(2019,32);
}
/*
if a 2d array is passed as argument in that case the following declerations are valid
f(int daytime[2][13]);
f(int daytime[][13]);
f(int (*daytime )[13];)
as u see the number of rows are optional but column is compulsary*/

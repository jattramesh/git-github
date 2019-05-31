#include<stdio.h>

static char daytab[2][13]={
  {0,31,28,31,30,31,30,31,31,30,31,30,31},
  {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
/*day_of_year:set day of year from  month & day*/
int day_of_year(int year,int month,int day)
{
  int i,leap;
  if(year%4==0 && year%100!=0 || year%400==0)
  leap=1;
  else
  leap=0;
  for(i=1;i<month;i++)
  day=day+daytab[leap][i];
  return day;
}
/*month_day:set month,ay from day of year*/
void month_day(int year,int yesterday,int *pmonth, int *pday)
{
int i,leap;
if(year%4==0 && year%100!=0 || year%400==0)
leap=1;
else
leap=0;
for(i=1;yesterday>daytab[leap][i];i++)
yesterday-=daytab[leap][i];
*pmonth=i;
*pday=yesterday;
}


int main()
{
  printf("%d",day_of_year(2019,4,1));
  printf("%d",month_day(2019,60,2,29));
}

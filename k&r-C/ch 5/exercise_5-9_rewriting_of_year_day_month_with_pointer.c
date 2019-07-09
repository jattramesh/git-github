static char daytab[2][13]={
  {0,31,28,31,30,31,30,31,31,30,31,30,31},
  {0,31,28,31,30,31,30,31,31,30,31,30,31}
};
int day_of_year(int year,int month,int day)
{
  int leap;
  char *p;
  leap=year%4==0 && year%100!=0;
  p=daytab[leap];
  while(--month)
  day+=*p++;
  return day;
}
void month_day(int year,int yearday,int *pmonth,int *pday)
{
  int leap;
  char *p;
  leap=year%4==0 && year%100!=0;
  p=daytab[leap];
  while(yearday>*++p)
  yearday-=*p;
  *pmonth=p-*(daytab+leap);//return month number
  *pday=yearday;
}

#include<stdio.h>
char *month(int n)
{      //return the name of nth month
  static char *name[]=
   {//work like 2d array
    "illegal month","jan","feb","march","april","may","june","july","august","september","october","november","december"
  };
  printf("%s\n",*(name+0));
  return (n<1 || n>12 ) ? name: name[n];

}
int main()
{
  printf("%s",(month(0)));
}

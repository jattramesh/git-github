#include<stdio.h>
int main()
{
  float p,r,t;
  float si;
  printf("Enter Principle \n ");
  scanf("%f",&p);
  printf("enter rate \n");
  scanf("%f",&r);
  printf("Enter time interval \n");
  scanf("%e",&t);
  si=p*r*t/100;
  printf("\n Simple intrest is %f",si);
}

#include<stdio.h>
#include<limits.h>
#define NL '\n'
int main()
{
  printf("%d",'0');
  /*signed type*/
  printf("signed char min =%d",SCHAR_MIN);//SHAR_MAX
  printf("signed short min %d",SHRT_MIN);//SHRT_MAX
  printf("signed int min =%d",INT_MIN);//SHRT_MAX
  printf("signed long %ld",LONG_MIN);//LONG_MAX
  /*unsigned limits*/
  printf("unsigned char max %u ",UCHAR_MAX);
  printf("unsigned short max %u ",USHRT_MAX);
  printf("unsigned int  max %u ",UINT_MAX);
  printf("unsigned long  max %lu",ULONG_MAX);


}

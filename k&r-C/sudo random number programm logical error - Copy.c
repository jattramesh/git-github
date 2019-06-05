#include<stdio.h>
unsigned long int next=1;
int random(void);
void srand(unsigned int );
int main()
{
  printf("%ul",random());
}
int random(void)
{
  next=next*1+12345;
  return (unsigned int)(next/65536)%32768;
}
void srand(unsigned int seed)
{
  next=seed;
}

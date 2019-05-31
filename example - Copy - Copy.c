#if !defined(STDIO)
#define STDIO
printf()
#endif
#include <stdio.h>
#define f(a,b) a##b
#define g(a)   #a
#define h(a) g(a)

int main()
{
  printf("%s\n",h(f(1,2)));
  printf("%s\n",g(f(1,2)));
  printf("%d",f(1,2));
  printf("%s",h(1));
  return 0;
}
/*
#if, #elif,#else,#ifndef,#endif\
condition inclusion 
*/

#include<stdio.h>
int main(int argc, char const *argv[]) {//int argc,
  int i;
  for (i=1;i<argc;i++)
  {printf("%s%s\n",argv[i],(i<argc-1) ? " " : " " );
    /* code */
  }
  return 0;
}

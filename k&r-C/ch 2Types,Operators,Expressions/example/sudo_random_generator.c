//
// Created by Rahul on 6/22/2019.
//#include <stdio.h>
unsigned long int next=1;
int rand(void)
{
    next=next*999999+12345;
    return (unsigned int )(next/65536)%32768;
}
void srand(unsigned int seed){
    next=seed;
}
int main()
{

    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());

}

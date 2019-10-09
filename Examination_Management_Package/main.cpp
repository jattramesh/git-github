#include <iostream>
#include <stdio.h>
#include "Class_student.h"
#define getbig(ch) ((ch-'0' + '0' )>=97) ? (ch-'0'+'0'-32) : (ch)
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    char ch='A';
    printf("%c",getbig('b'));
    return 0;
}
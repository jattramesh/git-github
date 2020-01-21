#include"array.h"
int main()
{
  printf("Enter first matrix");
  int arr[3][3];
  int arr2[3][3];
  takearray(arr,3,3);
  printf("Enter 2nd array\n");
  takearray(arr2,3,3);
  printf("add\n");  add(arr,arr2,3,3);
  printarray(result,3,3);
  mult(arr,arr2,3,3);
  printf("Multiply\n");
    printarray(result,3,3);
    transpose(arr,3,3);
    printarray(result,3,3);
}

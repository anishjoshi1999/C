#include<stdio.h>
int main(){
  int a = 10;
  int *p;
  int *q;
  p = &a;
  q = &p;
  printf("\nThe value of a is %d",a);
  printf("\nThe address of a is %p",&a);
  printf("\nThe adress of a using pointer is %p",p);
  printf("\nThe value of a using dereference operator is %d",*p);
  printf("\n");
  return 0;
}
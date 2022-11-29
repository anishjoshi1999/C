#include<stdio.h>
void main(){
   int a  = 10;
   int b = 5;
   int c = 15;
   int d;
   int e;
   d = a > b && b < c;
   e = a > b || b > c;
   printf("The value of d is %d\n",d);
   printf("The value of e is %d\n",d);
   printf("The opposite of e is %d\n",!e);
}
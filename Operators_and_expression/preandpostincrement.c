#include<stdio.h>
void main(){
    int a = 5;
    int b = 10;
    int c;
    int d;
    printf("The value of a before increment is %d\n",a);
    printf("The value of b before increment is %d\n",b);
    c = ++a;
    d = b++;
    printf("The value of a after increment is %d\n",a);
    printf("The value of b after increment is %d\n",b);
    printf("The value of c after increment is %d\n",c);
    printf("The value of d after increment is %d\n",d); 
   

}
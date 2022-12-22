#include<stdio.h>
// Global variable
int b = 7;
int main(){
    // Local variable
    int a = 5;
    printf("\nThe value of a is %d",a);
    printf("\nThe value of b is %d",b);
    hello();
    return 0;
}
void hello(){
    printf("\nInside hello function");
    printf("\nThe value of b is %d",b);
}
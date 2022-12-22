/*What are formal argument in a c-function 
maintain the relationship between formal argument and argument*/
#include<stdio.h>
// x and y are formal argument
void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y =temp;
    printf("\nThe value of a = %d and b = %d after swapping is",x,y);
}
int main(){
    int a,b;
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nThe value of a = %d and b = %d before swapping",a,b);
    // a and b are actual arguments
    swap(a,b);
    return 0;
}
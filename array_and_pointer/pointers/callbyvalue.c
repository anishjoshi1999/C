#include<stdio.h>
// Function declation
void swap(int x,int y);
int main(){
    int a,b;
    printf("\nEnter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    printf("\nBefore swapping the value of a = %d and b  = %d",a,b);
    swap(a,b);
    printf("\nAfter swapping the value of a = %d and b = %d",a,b);
    printf("\n");
    return 0;
}
// Function definition
void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping the value of a = %d and b = %d",x,y);
}
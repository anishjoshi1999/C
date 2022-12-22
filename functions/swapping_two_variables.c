// With function
#include<stdio.h>
// function declaration
void swap(int x,int y);
int main(){
    int a,b;
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nBefore swapping a = %d and b = %d",a,b);
    swap(a,b);
    printf("\n");
    return 0;
}
// function definition
void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping a = %d and b = %d",x,y);
}
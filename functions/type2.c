// Function with parameter with no return type
#include<stdio.h>

void add(int x,int y){
    int sum;
    sum = x + y;
    printf("\nThe sum of %d and %d is %d",x,y,sum);
}
int main(){
    int a,b;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    add(a,b);
    return 0;
}
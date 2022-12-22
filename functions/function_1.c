#include<stdio.h>

int add(int x,int y){
    int sum;
    sum = x + y;
    return sum;
}
int main(){
    int a,b,c;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    c = add(a,b);
    printf("\nThe sum of %d and %d is %d",a,b,c);
    printf("\n");
    return 0;
}
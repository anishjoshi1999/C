// Function with no parameter and return type
#include<stdio.h>
int add(){
    int a,b,sum;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    sum = a + b;
    return sum;
}
int main(){
    int c;
    c = add();
    printf("\nThe sum of two numbers is %d",c);
    return 0;
}
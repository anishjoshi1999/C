// Function with no parameter and no return type
#include<stdio.h>
void add(){
    int a,b,sum;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    sum = a + b;
    printf("\nThe sum of %d and %d is %d",a,b,sum);
}
int main(){
    add();
    return 0;
}
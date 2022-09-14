#include<stdio.h>
int main(){
    // Declaration
    int num1,num2,sum;
    // Read num1 and num2
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    // Sum = num1 and num2
    sum = num1 + num2;
    // Display sum
    printf("The sum of two numbers is: %d",sum);
    return 0;
}
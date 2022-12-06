// 153, 370, 371, 407, 1634, 8208, 9474, 54748, ... etc are armstrong numbers
// 153 = 1*1*1 + 5*5*5 + 3*3*3 
#include<stdio.h>
int main(){
    int num,remainder,originalNumber;
    int sum = 0;
    printf("\nEnter a three digits number: ");
    scanf("%d",&num);
    originalNumber = num;
    while(num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num = num / 10;
    }
    if(originalNumber == sum) {
        printf("\n%d is an armstrong number",originalNumber);
    }else{
        printf("\n%d is not an armstrong number",originalNumber);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int firstNumber,secondNumber,thirdNumber;
    printf("\nEnter First Number");
    scanf("%d",&firstNumber);
    printf("\nEnter Second Number");
    scanf("%d",&secondNumber);
    printf("\nEnter Third Number");
    scanf("%d",&thirdNumber);
    if(firstNumber < secondNumber){
        if(firstNumber < thirdNumber){
            printf("\nFirst Number is the smallest number: %d",firstNumber);
        }else{
            printf("\nThird Number is the smalled number: %d",thirdNumber);
        }
    }else{
        if(secondNumber < thirdNumber){
            printf("\nSecond Number is the smallest number: %d",secondNumber);
        }else{
            printf("\nThird Number is the smalled number: %d",thirdNumber);
        }
    }
    printf("\n");


    return 0;
}
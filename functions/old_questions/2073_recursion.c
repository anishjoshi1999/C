#include<stdio.h>
long int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){
    int num;
    long int fact;
    printf("\nEnter a positive number");
    scanf("%d",&num);
    fact = factorial(num);
    printf("\nThe factorial of %d is %ld",num,fact);
    return 0;
}
// write a program for calculating the compund amount of 
// any principle (p) in t years with rate (R)
// where the amount is given by the expression amount 
// p(1+i)^t
// here i = R/100


#include<stdio.h>
#include<math.h>
int main(){
    float p,t,r,i;
    float amount;
    float temp = 1;
    printf("\nEnter the principle amount: ");
    scanf("%f",&p);
    printf("\nEnter the time period: ");
    scanf("%f",&t);
    printf("\nEnter the interest rate: ");
    scanf("%f",&r);
    i = r / 100;
    for(float j = 0; j< t;j++){
        temp *= (1 + i);
    }
    amount = temp * p;
    printf("\nThe principle amount is %f",amount);
    return 0;
}
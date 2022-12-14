// write a program for calculating the compound amount of principle in t years with rate where the amount is given by the expression amount = p(1+i)^t
#include <stdio.h>
int main()
{
    float principle, time, rate, amount;
    float temp = 1;
    printf("\nEnter the principle amount:");
    scanf("%f", &principle);
    printf("\nEnter your time period: ");
    scanf("%f", &time);
    printf("\nEnter your interest rate: ");
    scanf("%f", &rate);
    rate = rate / 100;
    for (int i = 1; i <= time; i++)
    {
        temp *= (1 + rate);
    }
    amount = principle * temp;
    printf("The amount is %.2f", amount);
    return 0;
}
#include <stdio.h>
int main()
{
    // declaring their float variables for the program
    float a, b, sum;
    printf("\nEnter your first number: ");
    scanf("%f", &a);
    printf("\nEnter your Second number: ");
    scanf("%f", &b);
    // computing two variables and storing into sum
    sum = a + b;
    printf("\nThe sum of %.2f and %.2f is %.2f", a, b, sum);
    return 0;
}
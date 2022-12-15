#include <stdio.h>
int main()
{

    int a, b, product;
    printf("\nEnter your first number: ");
    scanf("%d", &a);
    printf("\nEnter your Second number: ");
    scanf("%d", &b);
    product = a * b;
    printf("\nThe product of %d and %d is %d", a, b, product);
    return 0;
}
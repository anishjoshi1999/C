#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter a number to be tested:");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nThe number is negative");
    }
    else
    {
        printf("\nThe number is positive");
    }
    return 0;
}
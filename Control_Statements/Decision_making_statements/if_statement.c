#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter a number to be tested:");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The number is negative");
    }
    return 0;
}
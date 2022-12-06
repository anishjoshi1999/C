#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("\nEnter First Number: ");
    scanf("%d", &num1);
    printf("\nEnter Second Number: ");
    scanf("%d", &num2);
    printf("\nEnter Third Number: ");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\nNum1 %d is the largest number", num1);
        }
        else
        {
            printf("\nNum3 %d is the largest number", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("\nNum2 %d is the largest number", num2);
        }
        else
        {
            printf("\nNum3 %d is the largest number", num3);
        }
    }
    return 0;
}
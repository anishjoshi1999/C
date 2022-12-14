#include <stdio.h>
int main()
{
    int num;
    int a = 0, b = 1, sum = 0;
    printf("\nHow many numbers you want to print: ");
    scanf("%d", &num);
    printf("\nThe fibonacci numbers to %dth place is: ", num);
    printf("\n%d", a);
    printf("\n%d", b);
    for (int i = 0; i < num; i++)
    {
        sum = a + b;
        printf("\n%d", sum);
        a = b;
        b = sum;
    }
    return 0;
}
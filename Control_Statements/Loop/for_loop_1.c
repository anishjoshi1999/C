#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("\nEnter a number to add the sum of its natural numbers:");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("\nThe sum of %d numbers are %d", num, sum);
    return 0;
}
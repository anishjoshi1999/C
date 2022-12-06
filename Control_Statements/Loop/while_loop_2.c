#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    int count = 1;
    printf("\nEnter a number to add the sum of its natural numbers:");
    scanf("%d", &num);
    while (count <= num)
    {
        sum = sum + count;
        count = count + 1;
    }
    printf("\nThe sum of %d numbers are %d", num, sum);
    return 0;
}
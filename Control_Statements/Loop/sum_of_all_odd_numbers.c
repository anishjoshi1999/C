#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("\nEnter any positive number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    printf("The sum of all odd number to %d is %d", num, sum);
    return 0;
}
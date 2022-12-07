#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("\nEnter any positive number: ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of all even number to %d is %d", num, sum);
    return 0;
}
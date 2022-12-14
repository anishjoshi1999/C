#include <stdio.h>
int main()
{
    int num;
    int flag = 1;
    printf("\nEnter any positive number: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("\n%d is not a prime number. Please try again.", num);
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("\n%d is a prime number", num);
        }
        else
        {
            printf("\n%d is not a prime number", num);
        }
    }

    return 0;
}
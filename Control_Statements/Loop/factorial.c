#include <stdio.h>
int main()
{
    // Declaration
    int num;
    // Initialization
    long long int fact = 1;
    printf("\nEnter any number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nFactorial cannot be computed for negative number");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d is %lld", num, fact);
    }

    return 0;
}
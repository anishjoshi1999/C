#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter a number whether the number is even or odd");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("\nThe number is even");
    }
    else
    {
        printf("\nThe number is odd");
    }
    return 0;
}
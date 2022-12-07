#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter any number to calculate the multiplication of: ");
    scanf("%d", &num);
    printf("\nThe Multiplication table of %d is", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d", num, i, i * num);
    }
    return 0;
}
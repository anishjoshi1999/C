#include <stdio.h>
// to print all the odd numbers between 1 to 50
int main()
{
    // initialize the integer variable sum to 0
    int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        // to check whether the i is odd or not
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("\nThe sum of all odd numbers between 1 to 50 is %d", sum);
    return 0;
}
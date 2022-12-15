#include <stdio.h>
int main()
{
    float sum = 0.0;
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);
    for (int k = 1; k <= n; k++)
    {
        // sum += 1 / k;
        sum = sum + 1 / (float)k;
    }
    printf("\nThe sum of series is %f", sum);
    return 0;
}
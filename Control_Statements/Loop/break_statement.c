#include <stdio.h>
int main()
{
    printf("\nBefore starting for loop");
    for (int i = 0; i < 10; i++)
    {
        printf("\nHello World from above");
        break;
        printf("\nHello World from below");
    }
    printf("\nLooping finished");
    return 0;
}
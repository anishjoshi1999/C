#include <stdio.h>
int main()
{
    int count = 0;
    while (count != 10)
    {
        if (count == 2)
        {
            continue;
        }
        printf("\nHello World from loop no %d", count);
        count++;
    }
    return 0;
}
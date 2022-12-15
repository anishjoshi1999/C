#include <stdio.h>
int main()
{
    int count = 0;
    printf("\nStart of do while loop");
    do
    {
        printf("\nHello World");
        count++;
        // count = count + 1;

    } while (count != 5);
    printf("\nEnd of do while loop");
    return 0;
}
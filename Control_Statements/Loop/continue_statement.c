// Continue statement
#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("\nLoop is working");
    }

    return 0;
}
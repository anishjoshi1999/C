#include <stdio.h>
int main()
{
    char string[10];
    printf("\nEnter your name:");
    scanf("%[^A-Z]", string);
    printf("\nYour name is %s", string);
    return 0;
}
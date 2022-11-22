#include <stdio.h>
int main()
{
    char string[10];
    printf("\nEnter your name:");
    scanf("%[a-z]", string);
    printf("\nYour name is %s", string);
    return 0;
}
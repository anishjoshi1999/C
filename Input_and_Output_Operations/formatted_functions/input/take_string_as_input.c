#include <stdio.h>
int main()
{
    char name[10];
    printf("\nEnter your name:");
    scanf("%[^\n]", name);
    printf("\nYour name is %s", name);
    return 0;
}
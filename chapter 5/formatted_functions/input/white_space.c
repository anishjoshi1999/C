#include <stdio.h>
int main()
{
    int n1;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter a character: ");
    // Note a space before %c
    scanf(" %c", &ch);
    printf("\nNumber: %d \t Character: %c", n1, ch);
    return 0;
}
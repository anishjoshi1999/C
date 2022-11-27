#include <stdio.h>
int main()
{
    char gender;
    printf("Enter gender M or F:");
    gender = getchar();
    printf("\nYour gender is:");
    putchar(gender);
    return 0;
}
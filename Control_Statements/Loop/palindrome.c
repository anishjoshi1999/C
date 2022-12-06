#include <stdio.h>
int main()
{
    int num, remainder, originalNumber;
    int reversedNum = 0;
    printf("\nEnter a Number: ");
    scanf("%d", &num);
    originalNumber = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }
    if (originalNumber == reversedNum)
    {
        printf("\n%d is a palindrome number", originalNumber);
    }
    else
    {
        printf("\n%d is not a palindrome number", originalNumber);
    }

    return 0;
}
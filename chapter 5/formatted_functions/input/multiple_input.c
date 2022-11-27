#include <stdio.h>
int main()
{
    // Declaration
    int l, b, h;
    int volume;
    printf("\nEnter length , breadth and height: ");
    scanf("%d%d%d", &l, &b, &h);
    volume = l * b * h;
    printf("\nThe volume of a given box is: %d", volume);
    return 0;
}
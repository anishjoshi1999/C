#include <stdio.h>
#include <conio.h>
int main()
{
    char ch1, ch2;
    printf("Enter 1st character:");
    ch1 = getch();
    printf("\nEnter 2st character:");
    ch2 = getche();
    printf("\n1st character:");
    putch(ch1);
    printf("\n2st character:");
    putch(ch2);
    return 0;
}
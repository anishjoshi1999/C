#include <stdio.h>
int main()
{
    int day, month, year;
    printf("Enter month,day and year in MM\\DD\\YYYY format: ");
    scanf("%d\\%d\\%d", &month, &day, &year);
    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d\n", year);
    return 0;
}
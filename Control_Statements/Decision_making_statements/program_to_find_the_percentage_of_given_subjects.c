#include <stdio.h>
int main()
{
    float total;
    float percentage;
    float physics, chemistry, maths, english, computer;
    printf("\nEnter the marks of Physics: ");
    scanf("%f", &physics);
    printf("\nEnter the marks of Chemistry: ");
    scanf("%f", &chemistry);
    printf("\nEnter the marks of Maths: ");
    scanf("%f", &maths);
    printf("\nEnter the marks of English: ");
    scanf("%f", &english);
    printf("\nEnter the marks of Computer: ");
    scanf("%f", &computer);
    total = physics + chemistry + maths + english + computer;
    percentage = total / 5.0;
    printf("The percentage of a students is %1.2f", percentage);
    if (percentage >= 80)
    {
        printf("\nDistinction");
    }
    else if (percentage >= 60 && percentage < 80)
    {
        printf("\nFirst Division");
    }
    else if (percentage >= 45 && percentage < 60)
    {
        printf("\nSecond Division");
    }
    else if (percentage >= 35 && percentage < 45)
    {
        printf("\nThird Division");
    }
    else
    {
        printf("\nFail");
    }
    return 0;
}
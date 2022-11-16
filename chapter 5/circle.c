#include <stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area;
    printf("\nEnter the radius of a circle: ");
    scanf("%d", &r);
    area = PI * r * r;
    printf("\nThe area of a circle is :%f", area);
    return 0;
}
// Link section
#include<stdio.h>
// definition section 
#define PI 3.14
// main section
void main(){ 
    int r;
    float area;
    printf("Enter a radius");
    scanf("%d",&r);
    area = PI * r * r;
    printf("The area of a circle is %.2f ",area);
} 
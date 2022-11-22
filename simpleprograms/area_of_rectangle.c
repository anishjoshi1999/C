#include<stdio.h>
int main(){
    int length;
    int breadth;
    int area;
    printf("Enter a length");
    scanf("%d",&length);
    printf("Enter a breadth");
    scanf("%d",&breadth);
    area = length * breadth;
    printf("The area of a rectangle is %d",area);
}
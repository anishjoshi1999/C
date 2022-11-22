#include<stdio.h>
void add(int x,int y){
    int sum = x + y;
    printf("The sum of two numbers is %d",sum);
}
void main(){
    int a = 10;
    int b = 20;
    add(a,b);
}
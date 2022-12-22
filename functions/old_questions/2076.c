#include<stdio.h>
// function prototype or function declaration
int add(int,int);
int main(){
    int a = 10;
    int b = 20;
    printf("\nThe sum of %d and %d is %d",a,b,add(a,b));
    return 0;
}
// function definition
int add(int x,int y){
    return x+y;
}
// what is the purpose of function prototype?


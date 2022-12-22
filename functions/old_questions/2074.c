/*Write a program with a function check prime(n which will take n as an 
argument and will test whether the number n is prime or not*/
#include<stdio.h>
void prime(int x){
    int i;
    for(i = 2;i<=x;i++){
        if(x % i == 0){
            break;
        }
    }
    if(i == x){
        printf("\nThe number %d is a prime number",x);
    }
    else{
        printf("\nThe number %d is not a prime number",x);
    }
}
int main(){
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    prime(n);
    printf("\n");
    return 0;
}
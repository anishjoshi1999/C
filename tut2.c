#include<stdio.h>
int main(){
    // Declaration
    int num;
    // Read num
    printf("Enter a number");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
#include<stdio.h>

int main(){
    // Array Initialization or definition
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int sum = 0;
    for(int i = 0;i<10;i++){
        sum = sum + a[i];
    }
    printf("\nThe sum of an array is %d",sum);
    printf("\n");
    return 0;
}
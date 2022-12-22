// Sum of natural numbers using recursion function
#include<stdio.h>
int compute_sum(int n){
    if(n!=0){
        return n + compute_sum(n-1);
    }
    else {
        return n;
    }

}
int main(){
    int number,result;
    printf("\nEnter a Positive numbers");
    scanf("%d",&number);
    result = compute_sum(number);
    printf("\nThe sum of %d is %d",number,result);
    printf("\n");
    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int elements[5];
    printf("\nEnter elements in an array");
    for(int i = 0 ; i < 5;i++){
        printf("\nEnter %d element: ",i+1);
        scanf("%d",&elements[i]);
    }
    // To check the least number
    int leastNumber;
    leastNumber = elements[0];
    for(int i = 1 ;i < 5;i++){
        if(leastNumber < elements[i]){
            continue;
        }
        leastNumber = elements[i];
    }
    printf("\nThe smallest number amoung 5 elements is %d",leastNumber);

    return 0;
}
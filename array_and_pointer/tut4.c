#include<stdio.h>
int main(){
    // Array declaration
    int a[5];
    // For assigning values into an array
    for(int i = 0;i < 5;i++){
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nDisplaying elements into an array");
    // For displaying elements in an array
    for(int i = 0;i < 5;i++){
        printf("\nThe %d element is %d",i+1,a[i]);
    }
    return 0;
}
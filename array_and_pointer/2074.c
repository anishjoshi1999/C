// Discuss array of pointers with suitable examples
#include<stdio.h>
int main(){
    int a[] = {1,2,3};
    int *ptr[3];
    for(int i = 0;i < 3;i++){
        // Assigning the address of integer.
        ptr[i] = &a[i];
    }
    // To print the address of an array "a"
    for(int i = 0;i < 3;i++){
        printf("\nThe address of a[%d] is %p" ,i,&a[i]);
    }
     // To print the value of pointer "ptr"
    for(int i = 0;i < 3;i++){
        printf("\nThe address of ptr[%d] is %p" ,i,ptr[i]);
    }
    printf("\n");
    return 0;

}
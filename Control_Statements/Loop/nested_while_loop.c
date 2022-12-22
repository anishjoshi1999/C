#include<stdio.h>
int main(){
    int i = 0;
    int j = 0;
    while(i != 5){
        printf("\nHello World from outer loop");
        while(j !=5){
            printf("\nHello World from inner loop");
            j++;
        }
        j = 0;
        i++;
        
    }
    return 0;
}
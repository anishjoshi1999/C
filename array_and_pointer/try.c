#include<stdio.h>
int main(){
    // 2D Matrix a and b intialization and declaration 
    int a[2][2] = {{1,2},{2,3}};
    int b[2][2] = {{2,3},{4,3}};
    // Declaration of 2D matrix named c
    int c[2][2];
    // Adding corresponding componenets of matrix a and b and assigning it to c 
    for(int i = 0; i < 2;i++){
    for(int j = 0; j < 2; j++){
        c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0; i < 2;i++){
    for(int j = 0; j < 2; j++){
        printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
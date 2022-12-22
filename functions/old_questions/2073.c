// How local and global variables can be defined in c functions illustrate with examples.
#include<stdio.h>
// Global variable
int a = 10;

void fun(){
    // local variable
    int b = 6;
    printf("\nThe value of a from fun function is %d",a);
    printf("\nThe value of b from fun function is %d",b);

}
int main(){
    // local variable
    int b = 5;
    int c = 7;
    printf("\nThe value of a from main function is %d",a);
    printf("\nThe value of b from main function is %d",b);
    fun();
    return 0;
}

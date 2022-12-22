/* Write a program to capture input and display outputs for characters 
and write comments in each line of your programs.*/


// Use of header file stdio.h
#include<stdio.h>
// inside main funtion
int main(){
    // Declaring a varaible named ch of character type
    char ch;
    // Getting a character from a user
    printf("\nEnter a character: ");
    scanf("%c",&ch);
    // Displaying the entered character
    printf("\nThe character you have entered is: %c",ch);
    return 0;
}

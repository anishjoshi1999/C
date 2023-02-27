/*WAP to calculate the percentage of 8 subjects of a Student*/
/*Input must be taken from the user*/
/*Display each individual marks of a students and display it's percentage*/
#include<stdio.h>
int main(){
    // Declaration of an array named subjects
    float subjects[8];
    float sum = 0;
    float percentage;
    for(int i = 0;i < 8;i++){
        printf("\nEnter Subject %d: ",i+1);
        scanf("%f",&subjects[i]);
        sum = sum + subjects[i];
    }
    printf("\nDisplaying Marks of 8 subject");
    for(int i = 0;i < 8;i++){
        printf("\nMarks of %d Subject is %.3f",i+1,subjects[i]);
    }
    percentage = sum / 8;
    printf("\nThe percentage of 8 subjects are %.3f",percentage);
    printf("\n");
    return 0;
}
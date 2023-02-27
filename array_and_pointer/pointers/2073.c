/* How array can be passed to a function? Compare and contrast the single 
and multi-dimesnsional arrays with examples.Define the pointers with their use in a c program*/
#include<stdio.h>
// function declaration
void average(float [],int);
int main(){
    float marks[6];
    // For input
    for(int i=0;i< 6;i++){
        printf("\nEnter %d subject: ",i+1);
        scanf("%f",&marks[i]);
    }
   average(marks,6);
//    avarage(marks,sizeof(marks)/sizeof(marks[0]));
   printf("\n");
   return 0;
}
// function defintion
void average(float numbers[],int x){
     // For compute 
    float totalMarks = 0;
    float percentage;
    for(int i=0;i<x;i++){

        totalMarks = totalMarks + numbers[i];
    }
    percentage = totalMarks / x;
    printf("\nThe total marks is %f",totalMarks);
    printf("\nThe total percentage is %.2f",percentage);

}
#include<stdio.h>
double average(double[],int);
int main(){

    double subjects[8],total,percentage;
    int size = sizeof(subjects)/ sizeof(subjects[0]);
    for(int i = 0; i < size;i++) {
        printf("\nEnter Subject %d: ",i+1);
        scanf("%lf",&subjects[i]);
    }
    percentage = average(subjects,size);
    printf("\nThe total marks is %.2lf",percentage);
    return 0;
}
double average(double marks[],int size){
    double total;
    for(int i = 0; i < size;i++){
        total = total + marks[i];
    }
    return total / size;
}

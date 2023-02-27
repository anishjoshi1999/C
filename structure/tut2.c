#include<stdio.h>
#include<string.h>
struct Student {
    // data members
    char name[50];
    int rollNo;
    float subjects[5];
};
int main(){
    struct Student s[3];
    float average[3]={0,0,0};
    // For input
    for(int i = 0; i < 3;i++){
        printf("\nEnter %d Student Name: ",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter Rollno of %d Student: ",i+1);
        scanf(" %d",&s[i].rollNo);
        for(int j = 0;j < 5;j++){
            printf("\nEnter the marks of %d Subject of Students %d: ",j+1,i+1);
            scanf("%f",&s[i].subjects[j]);
        }
    }
    // To calculate the average of each students
    for(int i = 0; i < 3;i++){
        for(int j = 0 ; j < 5;j++){
            average[i] = average[i] + s[i].subjects[j];
        }
    }
 
    // For output
    for(int i = 0; i < 3;i++){
        printf("\nInformation of student %d",i+1);
        printf("\nName of %d Student is: %s",i+1,s[i].name);
        printf("\nRollno of %d Student is: %d",i+1,s[i].rollNo);
        printf("\nThe average of %d Student is: %f",i+1,average[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}


// Write a C-program that will illustrate the use of structure (2073,2074,2075)
// Write a C-program of your own choice using array of structure (2074)
#include<stdio.h>
#include<string.h>
struct Student {
    // data members
    char name[50];
    int rollNo;
};
int main(){
    struct Student s[3];
    // For input
    for(int i = 0; i < 3;i++){
        printf("\nEnter Name of %d Student : ",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter Rollno of %d Student: ",i+1);
        scanf(" %d",&s[i].rollNo);
    }
    // For output
    for(int i = 0; i < 3;i++){
        printf("\nInformation of student %d",i+1);
        printf("\nName of %d Student is: %s",i+1,s[i].name);
        printf("\nRollno of %d Student is: %d",i+1,s[i].rollNo);

    }
    printf("\n");
    return 0;
}


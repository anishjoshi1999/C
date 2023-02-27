#include<stdio.h>
#include<string.h>
// Write a c program of your own choice using array of structure
// Define a Structure named Students which includes Student information
struct Student {
    char name[20];
    int rollno;
};
int main(){
    Student s[3];
    // For Input 
    for(int i = 0; i < 3; i++){
        printf("\nEnter Student %d name: ",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter Student %d rollno: ",i+1);
        scanf(" %d",&s[i].rollno);
    }
    // For output
        for(int i = 0; i < 3; i++){
            printf("\nInfo of Student %d",i+1);
            printf("\nThe Student %d name is: %s",i+1,s[i].name);
        // printf("\nThe Student %d rollno is: %d",i+1,s[i].rollno);
        // printf("\n");
    }
    printf("\n");

    return 0;
}


#include<stdio.h>
#include<string.h>
struct Student {
    // data members
    char name[50];
    int rollNo;
    struct Marks {
        char subject[10];
        double marks;
    }m;
};
int main(){
    struct Student s[3];
    // For input
    for(int i = 0; i < 3;i++){
        printf("\nEnter Name of %d Student : ",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter Rollno of %d Student: ",i+1);
        scanf(" %d",&s[i].rollNo);
        for(int j = 0;j < )
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

// Write a C-program of your own choice using union(2073,2075 and 2076)
#include<stdio.h>
union Student {
    char name[20];
    int age;
};
int main(){
    union Student s;
    // Input
    printf("\nEnter the Name of the Student: ");
    scanf("%s",s.name);
    printf("\nEnter the age of the Student: ");
    scanf("%d",&s.age);
    // Output
    printf("\nThe Name of the Student is: %s",s.name);
    printf("\nThe Roll of the Student is: %d",s.age);
    printf("\n");
    return 0;
}

// Write a C-program of your own choice using the nested structure
#include<stdio.h>
struct collegeDetail {
    char college_name[30];
    char college_address[30];
};

struct studentDetails {
    int rollno;
    char student_name[20];
    struct collegeDetail details;
};

int main(){
    struct studentDetails s;
    // Input
    printf("\nEnter the rollno of a student: ");
    scanf("%d",&s.rollno);
    printf("\nEnter the name of a student: ");
    scanf("%s",s.student_name);
    printf("\nEnter the college name of the student: ");
    scanf(" %s",s.details.college_name);
    printf("\nEnter the address of the college: ");
    scanf(" %s",s.details.college_address);
    // Output
    printf("\nThe name is %s and rollno is %d",s.student_name,s.rollno);
    printf("\nThe name of the college is %s",s.details.college_name);
    printf("\nThe address of the college is %s",s.details.college_address);
    printf("\n");
    return 0;
}
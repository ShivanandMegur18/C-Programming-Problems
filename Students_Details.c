#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float cgpa;
    char class_name[20];
};

int main()
{
    struct Student s[15];
    int i;
    int n;

    printf(" STUDENT DETAILS ENTRY \n");

    printf("Enter number of students:\n");
    scanf("%d",&n);

    // Input details of n students
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1 );

        printf("Enter Name: ");
        scanf(" %c", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Enter Class: ");
        scanf(" %19[^\n]", s[i].class_name);
    }

    // Display student details
    printf("\n\n STUDENT DETAILS \n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("--------------------------\n");

        printf("Name       : %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("CGPA       : %.2f\n", s[i].cgpa);
        printf("Class      : %s\n", s[i].class_name);
    }

    return 0;
}

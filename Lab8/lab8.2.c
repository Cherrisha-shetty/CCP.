//Develop a C program to create student structure, read two student details( Student roll number, name, section, department,
//fees, and results i.e., total marks obtained) and print the student details  who has scored the highest.

#include <stdio.h>
struct student
 {
    char firstName[50];
    int roll;
    float marks;
 }
s[10];
int main()
{
    int i;
    printf("Enter student details:\n");
    for (i = 0; i < 2; ++i)
        {
        s[i].roll = i + 1;
        printf("\nRoll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        }
    printf("Student with highest score:\n\n");
    for (i = 0; i < 2; ++i)
        {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
        }
    return 0;
}

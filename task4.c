#include <stdio.h>

int main()
{
    char name[50];
    int rollNumber;
    int age;
    float height;
    float GPA;
    char section;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter GPA: ");
    scanf("%f", &GPA);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("\n========================================\n");
    printf("\tSTUDENT INFORMATION\n");
    printf("========================================\n");

    printf("Name     : %s\n", name);
    printf("Roll No  : %d\n", rollNumber);
    printf("Age      : %d\n", age);
    printf("Height   : %.2f\n", height);
    printf("GPA      : %.2f\n", GPA);
    printf("Section  : %c\n", section);

    printf("========================================\n");

    return 0;
}

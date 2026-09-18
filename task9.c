#include <stdio.h>

int main()
{
    char name[50];
    int rollNumber;
    char section;
    int age;
    float CGPA;
    double height;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%f", &CGPA);

    printf("Enter height: ");
    scanf("%lf", &height);

    printf("\n========================================\n");
    printf("\t\tSTUDENT REPORT\n");
    printf("========================================\n");

    printf("Field\t\tValue\n");
    printf("----------------------------------------\n");

    printf("Name\t\t%s\n", name);
    printf("Roll Number\t%d\n", rollNumber);
    printf("Section\t\t%c\n", section);
    printf("Age\t\t%d\n", age);
    printf("CGPA\t\t%.2f\n", CGPA);
    printf("Height\t\t%.2lf\n", height);

    printf("----------------------------------------\n");

    return 0;
}

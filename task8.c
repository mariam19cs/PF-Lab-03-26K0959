#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char city[50];
    char university[100];
    char department[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter city: ");
    fgets(city, sizeof(city), stdin);

    printf("Enter university: ");
    fgets(university, sizeof(university), stdin);

    printf("Enter department: ");
    fgets(department, sizeof(department), stdin);

    name[strcspn(name, "\n")] = '\0';
    city[strcspn(city, "\n")] = '\0';
    university[strcspn(university, "\n")] = '\0';
    department[strcspn(department, "\n")] = '\0';

    printf("\n========================================\n");
    printf("\tSTUDENT PROFILE\n");
    printf("========================================\n");

    printf("Name       : ");
    puts(name);

    printf("City       : ");
    puts(city);

    printf("University : ");
    puts(university);

    printf("Department : ");
    puts(department);

    printf("========================================\n");

    return 0;
}

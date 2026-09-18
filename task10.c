#include <stdio.h>

int main()
{
    char name[50];
    int rollNumber;
    char section;
    float floatingValue;
    char sampleCharacter;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter a floating-point value: ");
    scanf("%f", &floatingValue);

    sampleCharacter = 'A';

    printf("\n=============================================\n");
    printf("\t   PROGRAMMING FUNDAMENTALS\n");
    printf("=============================================\n");

    printf("Name : ");
    puts(name);

    printf("Roll No : %d\n", rollNumber);
    printf("Section : %c\n", section);

    printf("\nC Topics:\n");
    printf("\t1. Variables\n");
    printf("\t2. Data Types\n");
    printf("\t3. Input/Output\n");
    printf("\t4. Format Specifiers\n");
    printf("\t5. Escape Sequences\n");

    printf("\nSample Character: '");
    putchar(sampleCharacter);
    printf("'\n");

    printf("Sample Question: \"What is C?\"\n");

    printf("\nFloating Value:\n");
    printf("Default : %f\n", floatingValue);
    printf("2-digit : %.2f\n", floatingValue);
    printf("4-digit : %.4f\n", floatingValue);

    printf("=============================================\n");

    return 0;
}

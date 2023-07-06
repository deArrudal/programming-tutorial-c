#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Numbers.
    int age = 40;
    double gpa = 3.7;

    // Characters.
    char grade = 'A';
    char name[] = "John";

    printf("Student's Name: %s\nAge: %d\nGrade: %c\nGPA: %.2f", name, age, grade, gpa);
    return 0;
}
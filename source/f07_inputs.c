#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa); // Note the difference in %lf
    printf("Your gpa is %.2f.\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c.\n", grade);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);
    */

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s.\n", name);

    return 0;
}
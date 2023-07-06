#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityFirstName[20];
    char celebrityLastName[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural Noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity's first name: ");
    scanf("%s", celebrityFirstName);
    printf("Enter a celebrity's last name: ");
    scanf("%s", celebrityLastName);

    printf("Roses are %s.\n", color);
    printf("%s are blue.\n", pluralNoun);
    printf("I love %s %s.\n", celebrityFirstName, celebrityLastName);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%d\n", age);
    printf("%d\n", *pAge);
    printf("%d\n", *&age);

    return 0;
}
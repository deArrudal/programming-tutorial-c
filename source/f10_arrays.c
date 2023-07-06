#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Index start from 0.
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

    int x[10];
    x[0] = 80;
    printf("%d\n", x[0]); // display non initialized value.

    char phrase[] = "Girrafe";
    printf("%c", phrase[2]);

    return 0;
}
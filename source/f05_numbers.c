#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 5;
    double b = 3;
    double ans = a / b;

    printf("Answer: %f\n", ans);
    printf("Answer: %f\n", floor(ans));
    printf("Answer: %f\n", ceil(ans));

    return 0;
}
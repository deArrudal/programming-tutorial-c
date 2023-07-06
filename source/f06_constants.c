#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const double PHI = 3.14159;
    int radius = 2;
    double area;

    area = PHI * pow(radius, 2);

    printf("Area [m^2]: %.2f", area);

    return 0;
}
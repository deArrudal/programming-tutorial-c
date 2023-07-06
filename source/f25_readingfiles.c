#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];

    // file modes: r - read, w - write, a - append
    FILE *fpointer = fopen("f24_output.txt", "r");

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);

    printf("%s", line);

    fclose(fpointer);

    return 0;
}
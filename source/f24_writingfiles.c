#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file modes: r - read, w - write, a - append
    FILE *fpointer = fopen("f24_output.txt", "a");

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fprintf(fpointer, "\nKelly, Customer Service");
    
    fclose(fpointer);

    return 0;
}
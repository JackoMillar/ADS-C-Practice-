#include <stdio.h>

int main()
{
    // Init variables
    int integerVariable;
    size_t size;

    // Get size of an integer and set it to size variable
    size = sizeof(integerVariable);

    // Print to terminal
    printf("Size of Integer Variable is %zu bytes\n", size);

    return 0;
}
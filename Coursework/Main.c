#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "data.h"

int main ( int argc , char **argv )
{
    clock_t t;
    printf("start: %d \n", (int) (t=clock()));

    // Init int array for holding sudoku values
    int sud[9][9] = {0};
    generateSud(sud);

    print_board(sud);

    printf("stop: %d \n", (int) (t=clock()-t));
    printf("Elapsed: %f seconds\n", (double) t / CLOCKS_PER_SEC);
}
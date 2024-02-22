#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "data.h"

void play_game()
{
    hash_data* data = init_hash();
    printf("\n");
    printf("Enter Sudoku input: ");
    int c = getchar();
    char* i = hash_search(data, c);
    printf("\nyour number is: %s\n", i);
}

int main ( int argc , char **argv )
{
    clock_t t;
    
    printf("start: %d \n", (int) (t=clock()));

    // Init int array for holding sudoku values
    int sud[9][9] = {0};
    generateSud(sud);

    play_game();

    printf("stop: %d \n", (int) (t=clock()-t));
    printf("Elapsed: %f seconds\n", (double) t / CLOCKS_PER_SEC);
}
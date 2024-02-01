#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "EmptyBoard.h"

int main ( int argc , char **argv )
{
    // Init int array for holding sudoku values
    int sud[9][9];
    int temp = 0;
    bool check = false;

  // Initialize random seed
    srand(time(NULL));

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            do {
                temp = (rand() % 9) + 1;
                check = false;

                // Check if the value is already present in the row
                for (int k = 0; k < j; k++) {
                    if (sud[i][k] == temp) {
                        check = true;
                        break;
                    }
                }

                 // Check if the value is already present in the current column
                for (int k = 0; k < i; k++) {
                    if (sud[k][j] == temp) {
                        check = true;
                        break;
                    }
                }
            } while (check);

            sud[i][j] = temp;
        }
    }

    // Generate empty
    empty_board(sud);
}
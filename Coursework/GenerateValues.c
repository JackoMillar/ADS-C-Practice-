#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "data.h"

bool input_numbers(int sud[9][9])
{
    bool check = false;
    int i, j;


    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 9; j++) 
        {
            if (sud[i][j] == 0)
            {
                check = true;
                break;
            }
        }
        if (check)
        {
            break;
        }
    }

    // If no empty element is found, the Sudoku is solved!
    if (!check)
    {
        return true;
    }

    // Try placing a number in the empty
    for (int num = 1; num <= 9; num++)
    {
        if (isValid(sud, i, j, num)) 
        {
            sud[i][j] = num;

            // Recursively try to solve the sodoku
            if (input_numbers(sud)) 
            {
                return true; // return true if a solution is found
            }

            // If placing num doesnt work then set back to 0
            sud[i][j] = 0;
        }
        }
        return false;
}

void generateSud(int sud[9][9])
{
    // Initialize random seed
    srand(time(NULL));

    // Generate a solved Sudoku board
    input_numbers(sud);

    int difficulty = 45;
    // Revert numbers back to zero
    int removeCount = difficulty;  // Adjust the difficulty level by changing the number of removed cells, will be done later
    while (removeCount > 0) 
    {
        int row = rand() % 9; // find a random row
        int col = rand() % 9; // find a random column

        // Check if the cell is already empty
        if (sud[row][col] != 0) 
        {
            sud[row][col] = 0;
            removeCount--;
        }
    }
    prog_bar(sud, difficulty);
    sud_board(sud);
}
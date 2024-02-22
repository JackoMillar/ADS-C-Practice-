#include <stdio.h>

#include "data.h"

hash_data* hash_search(hash_data* data, char* key) {
    printf("Enter Sudoku input:\n ");
    for (int i = 0; i < 9; i++) {
        printf("1");
        if (strcmp(data[i].key, key) == 0) {
            printf("1.5");
            printf("%d", data[i]);
            printf("2");
            return &data[i];
        }
    }
    printf("Enter Sudoku input: ");
    return NULL;
}

hash_data* init_hash()
{
    hash_data data[9] = {
        {"A", 1}, {"B", 2}, {"C", 3}, {"D", 4}, {"E", 5},
        {"F", 6}, {"G", 7}, {"H", 8}, {"I", 9}
    }; 
    return data;
}

bool isValid(int sud[9][9], int row, int col, int num) 
{
    // Check if 'num' is not present in the current row and column
    for (int i = 0; i < 9; i++) 
    {
        if (sud[row][i] == num || sud[i][col] == num)
        {
            return false;
        }
    }

    // Check if 'num' is not present in the 3x3 subgrid (box)
    int squareRow = row - row % 3;
    int squareCol = col - col % 3;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (sud[squareRow + i][squareCol + j] == num) 
            {
                return false;
            }
        }
    }

    return true;

}
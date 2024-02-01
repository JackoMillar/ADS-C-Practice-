#pragma once

#include <stdio.h>
#include <stdlib.h>
void empty_board(int sud[9][9]);

void empty_board(int sud[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            // Print all vertical lines
            if (j % 3 == 0 && j != 0)
            {
                printf("| ");
            }
            // Print each individual value
            printf("%d " , sud[i][j]);
        }
        // Line Break
        printf("\n");
        
        // Print horizontal lines
        if (i % 3 == 2 && i != 8)
        {
            printf("------+-------+------");
            printf("\n");
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

//#include "data.h"

void prog_bar(int sud[9][9], int diff)
{
    int progress = diff;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sud[i][j] == 0)
            {
                progress--;
            }
        }
    }
    printf("[");
    for (int i = 1; i < diff; i++)
    {
        if (i <= progress)
        {
            printf("#");
        }
        else
        {
            printf("-");
        }
    }
    printf("]%d/%d\n", progress, diff);
}

void sud_board(int sud[9][9])
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
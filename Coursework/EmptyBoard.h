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
        if (j % 3 == 0 && j != 0)
        {
            printf("| ");
        }
        sud[i][j] = 0;
        printf("%d " , sud[i][j]);
    }
    printf("\n");
    if (i % 3 == 2 && i != 8)
    {
        printf("------+-------+------");
        printf("\n");
    }

}
}
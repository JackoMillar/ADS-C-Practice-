#include <stdio.h>
#include <stdlib.h>
#include "EmptyBoard.h"

struct Sud_Values
{
    int vertical[9];
    int horizontal[9];
};

int main ( int argc , char **argv )
{
    //struct Sud_Values plot[9];
    int sud[9][9];

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

    //empty_board(sud);
}
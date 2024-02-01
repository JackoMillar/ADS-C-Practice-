#pragma once

#include <stdio.h>
#include <stdlib.h>

void empty_board(int sud[9][9])
{
   for (int i = 0; i < 9; i++)
   {
     printf("%d %d %d | %d %d %d | %d %d %d", sud[1][1], sud[1][1], sud[1][1], sud[1][1], sud[1][1], sud[1][1], sud[1][1], sud[1][1], sud[1][1]);
   }
   /*
	printf("X X X | X X X | X X X\n");
    printf("X X X | X X X | X X X\n");
    printf("X X X | X X X | X X X\n");
    printf("------+-------+------\n");
	printf("X X X | X X X | X X X\n");
    printf("X X X | X X X | X X X\n");
    printf("X X X | X X X | X X X\n");
    printf("------+-------+------\n");
	printf("X X X | X X X | X X X\n");
    printf("X X X | X X X | X X X\n");
    printf("X X X | X X X | X X X\n");*/
}
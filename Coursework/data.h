#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct
{
   char* key;
   int value;
} hash_data;

// Print Board
void prog_bar(int sud[9][9], int diff);
void sud_board(int sud[9][9]);

// Generate Sudoku Board
void generateSud(int sud[9][9]);
bool input_numbers(int sud[9][9]);

// Utilies
hash_data* init_hash();
hash_data* hash_search(hash_data* data, char* key);
bool isValid(int sud[9][9], int row, int col, int num);
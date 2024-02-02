#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Print Board
void print_board(int sud[9][9]);

// Generate Sudoku Board
void generateSud(int sud[9][9]);
bool input_numbers(int sud[9][9]);
bool isValid(int sud[9][9], int row, int col, int num);
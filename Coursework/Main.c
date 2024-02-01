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

    empty_board(sud);
}
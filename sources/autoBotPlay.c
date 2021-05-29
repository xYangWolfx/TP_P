//
// Created by Miguel Ferreira
// Nº: 2020107016
// on 5/29/21.
//

#include "../headers/game.h"
#include "../headers/board.h"

void botChangeColor(gameInfo *info, coordinates *play) {
    if (info->board[play->lines - 1][play->columns - 1] == 0) {
        info->board[play->lines - 1][play->columns - 1] = 1;
    } else if (info->board[play->lines - 1][play->columns - 1] == 1) {
        info->board[play->lines - 1][play->columns - 1] = 2;
    } else if (info->board[play->lines - 1][play->columns - 1] == 2) {
        info->board[play->lines - 1][play->columns - 1] = 3;
    } else {
        info->validPlay = 0;
    }
}

void botPutStone(gameInfo *info, coordinates *play) {
    if (info->player == 'B' && info->stone[1] < 1) {
        if (info->board[play->lines - 1][play->columns - 1] != 0) {
            info->validPlay = 0;
        } else if (info->board[play->lines - 1][play->columns - 1] == 0) {
            info->board[play->lines - 1][play->columns - 1] = 4;
            ++info->stone[1];
        }
    } else {
        info->validPlay = 0;
    }
}

void botAddLine(gameInfo *info) {
    if (info->player == 'B' && info->addLineColumn[1] < 2) {
        boardLineRealloc(info);
        ++info->addLineColumn[1];
    } else {
        info->validPlay = 0;
    }
}

void botAddColumn(gameInfo *info) {
    if (info->player == 'B' && info->addLineColumn[1] < 2) {
        boardColumnRealloc(info);
        ++info->addLineColumn[1];
    } else {
        info->validPlay = 0;
    }
}
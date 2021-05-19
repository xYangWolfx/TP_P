//
// Created by Miguel Ferreira on 5/19/21.
//

#ifndef SEMAFOROTP_BOARD_H
#define SEMAFOROTP_BOARD_H

#include "game.h"

void boardAlloc(gameInfo *info);
void boardLineRealloc(gameInfo *info);
void boardColumnRealloc(gameInfo *info);
void cleanBoardAlloc(int** board, int line, int column);

void populateBoard(gameInfo *info);
void printBoard(gameInfo *info);

#endif //SEMAFOROTP_BOARD_H

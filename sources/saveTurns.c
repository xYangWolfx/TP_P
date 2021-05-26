//
// Created by miguel on 5/24/21.
//

#include <stdio.h>
#include <stdlib.h>

#include "../headers/game.h"
#include "../headers/utils.h"
#include "../headers/board.h"

void saveTurn(gameInfo *info){
    printf("saveTurns\n");
    gameInfo *infoAux = NULL;
    infoAux = (gameInfo*)malloc(sizeof(gameInfo));

    //checkAllocMemory(infoAux);
    if (infoAux == NULL){
        printf("ERRRROOOOOO ALLOC\n");
        exit(0);
    }
    printf("Alocou memoria do infoAux\n");

    infoAux->board = info->board;

    for (int i = 0; i < info->size[0]; ++i) {
        printf("for size[0]\n");
        for (int j = 0; j < info->size[1]; ++j) {
            printf("for size[1]\n");
            infoAux->board[i][j] = info->board[i][j];
        }
    }

    for (int i = 0; i < 2; ++i) {
        printf("for size\n");
        infoAux->size[i] = info->size[i];
    }

    infoAux->player = info->player;
    infoAux->gameType = info->gameType;
    infoAux->validPlay = info->validPlay;

    for (int i = 0; i < 2; ++i) {
        printf("for stone\n");
        infoAux->stone[i] = info->stone[i];
    }

    for (int i = 0; i < 2; ++i) {
        printf("for lineColumns\n");
        infoAux->addLineColumn[i] = info->addLineColumn[i];
    }

    infoAux->turn = info->turn;

    infoAux->nextTurns = info;

    //info = infoAux;
}
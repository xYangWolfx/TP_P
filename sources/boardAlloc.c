//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdlib.h>

#include "../headers/board.h"

//inicializar o tabuleiro
void boardAlloc(struct gameInfo *info) {
    info->board = malloc(sizeof(info->board) * info->size[0]);

    checkBoardAllocMemory(info, 0);

    for (int i = 0; i < info->size[0]; i++) {
        info->board[i] = malloc(sizeof(info->board[i]) * info->size[1]);
        checkBoardAllocMemory(info, i);
    }
}

//Realocação de memória para a jogada de adicionar nova linha ao tabuleiro
void boardLineRealloc(gameInfo *info) {
    //Aumentar o número de linhas
    ++info->size[0];

    int **boardAux = realloc(info->board, sizeof(int *) * (info->size[0]));
    checkAllocMemoryAux(boardAux);

    boardAux[info->size[0] - 1] = malloc(sizeof(int) * info->size[1]);
    checkBoardAllocMemory(boardAux, 0);

    for (int i = 0; i < info->size[1]; i++) {
        boardAux[info->size[0] - 1][i] = 0;
    }

    info->board=boardAux;
}

//Realocação de memória para a jogada de adicionar nova coluna ao tabuleiro
void boardColumnRealloc(gameInfo *info) {
    int **boardAux = info->board;
    checkAllocMemoryAux(boardAux);

    //Aumentar o número de colunas
    ++info->size[1];

    for (int i = 0; i < info->size[0]; i++) {
        boardAux[i] = realloc(info->board[i], sizeof(int) * (info->size[1]));
    }
    checkBoardAllocMemory(boardAux, 0);

    for (int i = 0; i < info->size[0]; i++) {
        boardAux[i][info->size[1] - 1] = 0;
    }

    info->board = boardAux;
}

//Limpeza da memória alocada ao tabuleiro, no final do jogo
void cleanBoardAlloc(gameInfo *info) {
    checkBoardAllocMemory(info, 0);

    for (int i = 0; i < info->size[0]; i++) {
        free(info->board[i]);
    }

    free(info->board);
}
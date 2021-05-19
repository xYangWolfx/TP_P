//
// Created by miguel on 5/19/21.
//

#include <stdio.h>
#include <stdlib.h>

#include "../headers/board.h"
#include "../headers/game.h"

//inicializar o tabuleiro
void boardAlloc(struct gameInfo *info){
    info->board = malloc(sizeof info->board * info->size[0]);

    if (info->board == NULL){
        printf("erro de alocacao de memoria!");
        exit(0);
    }

    for (int i = 0; i < info->size[0]; i++) {
        info->board[i] = malloc(sizeof info->board[i] * info->size[1]);

        if (info->board[i] == NULL){
            printf("erro de alocacao de memoria!");
            exit(0);
        }
    }

    //return board;
}

void boardLineRealloc(gameInfo *info){
    int **boardAux = realloc(info->board, sizeof(int*) * ++(info->size[0]));

    if (boardAux == NULL){
        printf("erro de alocacao de memoria!");
        exit(0);
    }

    info->board=boardAux;
    info->board[info->size[0]-1] = malloc(sizeof(int) * info->size[1]);
}

void boardColumnRealloc(gameInfo *info){
    int **boardAux = realloc(info->board, sizeof(int*) * ++(info->size[1]));

    if (boardAux == NULL){
        printf("erro de alocacao de memoria!");
        exit(0);
    }

    info->board=boardAux;
    info->board[info->size[1]-1] = malloc(sizeof(int) * info->size[0]);
}

void cleanBoardAlloc(int** board, int line, int column){
    for (int i = 0; i < line; i++) {
        free(board[i]);
    }

    free(board);
}
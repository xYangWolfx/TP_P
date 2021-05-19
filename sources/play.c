//
// Created by miguel on 5/19/21.
//

#include <stdio.h>

#include "../headers/play.h"
#include "../headers/board.h"

void makePlayChangeColor(gameInfo *info){
    int line, column;

    printf("introduza uma linha:\n");
    scanf("%d", &line);

    printf("introduza uma coluna:\n");
    scanf("%d", &column);

    if (info->board[line-1][column-1] == 0){
        info->board[line-1][column-1] = 1;
    } else if (info->board[line-1][column-1] == 1){
        info->board[line-1][column-1] = 2;
    } else if (info->board[line-1][column-1] == 2){
        info->board[line-1][column-1] = 3;
    } else{
        printf("\nJogada não é válida!\nPor favor insira nova posição!\n");
    }
}

void makePlayPutStone(gameInfo *info){
    int line, column;

    printf("introduza uma linha:\n");
    scanf("%d", &line);

    printf("introduza uma coluna:\n");
    scanf("%d", &column);

    if (info->board[line-1][column-1] != 0){
        printf("\nJogada não é válida!\nPor favor insira nova posição!\n");
    } else if(info->board[line-1][column-1] == 0){
        info->board[line-1][column-1] = 4;
    }
}

void makePlayAddLine(gameInfo *info){
    boardLineRealloc(info);
}

void makePlayAddColumn(gameInfo *info){
    boardColumnRealloc(info);
}
//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdio.h>

#include "../headers/play.h"
#include "../headers/board.h"

void askPosition(gameInfo *info, coordinates *play){
    printf("Introduza uma linha:\n");
    play->lines = checkInt(1, info->size[0]);

    printf("Introduza uma coluna:\n");
    play->columns = checkInt(1, info->size[1]);
}

void makePlayChangeColor(gameInfo *info, coordinates *play) {
    askPosition(info, play);

    if (info->board[play->lines - 1][play->columns - 1] == 0) {
        info->board[play->lines - 1][play->columns - 1] = 1;
    } else if (info->board[play->lines - 1][play->columns - 1] == 1) {
        info->board[play->lines - 1][play->columns - 1] = 2;
    } else if (info->board[play->lines - 1][play->columns - 1] == 2) {
        info->board[play->lines - 1][play->columns - 1] = 3;
    } else {
        if (info->board[play->lines - 1][play->columns - 1] == 3) {
            printf("Não pode alterar uma peça vermelha!\n");
        } else if (info->board[play->lines - 1][play->columns - 1] == 4) {
            printf("Não pode jogar sobre uma pedra\n!");
        }
        printf("Jogada não é válida!\nPor favor insira nova posição!\n");
        info->validPlay = 0;
    }
}

void makePlayPutStone(gameInfo *info, coordinates *play) {
    askPosition(info, play);

    if (info->player == 'A' && info->stone[0] < 1) {
        if (info->board[play->lines - 1][play->columns - 1] != 0) {
            printf("Não pode colocar uma pedra numa posição já ocupada!\nJogada não é válida!\nPor favor insira nova posição!\n");
            info->validPlay = 0;
        } else if (info->board[play->lines - 1][play->columns - 1] == 0) {
            info->board[play->lines - 1][play->columns - 1] = 4;
            ++info->stone[0];
        }
    } else if (info->player == 'B' && info->stone[1] < 1) {
        if (info->board[play->lines - 1][play->columns - 1] != 0) {
            printf("Não pode colocar uma pedra numa posição já ocupada!\nJogada não é válida!\nPor favor insira nova posição!\n");
            info->validPlay = 0;
        } else if (info->board[play->lines - 1][play->columns - 1] == 0) {
            info->board[play->lines - 1][play->columns - 1] = 4;
            ++info->stone[1];
        }
    } else {
        printf("Jogada inválida, número de pedras excedido!\n");
        info->validPlay = 0;
    }
}

void makePlayAddLine(gameInfo *info) {
    if (info->player == 'A' && info->addLineColumn[0] < 2) {
        boardLineRealloc(info);
        ++info->addLineColumn[0];
    } else if (info->player == 'B' && info->addLineColumn[1] < 2) {
        boardLineRealloc(info);
        ++info->addLineColumn[1];
    } else {
        printf("Jogada inválida, número de linhas/colunas excedido!\n");
        info->validPlay = 0;
    }
}

void makePlayAddColumn(gameInfo *info) {
    if (info->player == 'A' && info->addLineColumn[0] < 2) {
        boardColumnRealloc(info);
        ++info->addLineColumn[0];
    } else if (info->player == 'B' && info->addLineColumn[1] < 2) {
        boardColumnRealloc(info);
        ++info->addLineColumn[1];
    } else {
        printf("Jogada inválida, número de linhas/colunas excedido!\n");
        info->validPlay = 0;
    }
}

void showPreviousTurns(gameInfo *info) {
    gameInfo *infoAux = info;
    int turns;

    printf("Introduza quantas jogadas pretende rever:\n");
    turns = checkInt(1, info->turn);

    reverse(&infoAux);

    for (int i = 0; i < turns; ++i) {
        infoAux = infoAux->nextTurns;

        if (infoAux == NULL) {
            printf("infoAux esta null!\n");
            break;
        }

        printf("Vez do jogador %c\nTurno: %d\n", infoAux->player, infoAux->turn);
        printBoardToConsole(infoAux);
    }

    printf("----------------\n  Jogada atual\n----------------\n");
    info->validPlay = 0;
}
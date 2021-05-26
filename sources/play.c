//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdio.h>

#include "../headers/play.h"
#include "../headers/board.h"

void makePlayChangeColor(gameInfo *info) {
    int line, column;

    printf("Introduza uma linha:\n");
    line = checkInt(1, info->size[0]);

    printf("Introduza uma coluna:\n");
    column = checkInt(1, info->size[1]);

    if (info->board[line - 1][column - 1] == 0) {
        info->board[line - 1][column - 1] = 1;
    } else if (info->board[line - 1][column - 1] == 1) {
        info->board[line - 1][column - 1] = 2;
    } else if (info->board[line - 1][column - 1] == 2) {
        info->board[line - 1][column - 1] = 3;
    } else {
        if (info->board[line - 1][column - 1] == 3) {
            printf("Não pode alterar uma peça vermelha!\n");
        } else if (info->board[line - 1][column - 1] == 4) {
            printf("Não pode jogar sobre uma pedra\n!");
        }
        printf("Jogada não é válida!\nPor favor insira nova posição!\n");
        info->validPlay = 0;
    }
}

void makePlayPutStone(gameInfo *info) {
    int line, column;

    if (info->player == 'A') {
        if (info->stone[0] < 1) {
            printf("Introduza uma linha:\n");
            line = checkInt(1, info->size[0]);

            printf("Introduza uma coluna:\n");
            column = checkInt(1, info->size[1]);

            if (info->board[line - 1][column - 1] != 0) {
                printf("Não pode colocar uma pedra numa posição já ocupada!\nJogada não é válida!\nPor favor insira nova posição!\n");
                info->validPlay = 0;
            } else if (info->board[line - 1][column - 1] == 0) {
                info->board[line - 1][column - 1] = 4;
                ++info->stone[0];
            }
        } else {
            printf("Jogada inválida, número de pedras excedido!\n");
            info->validPlay = 0;
        }
    } else if (info->player == 'B') {
        if (info->stone[1] < 1) {
            printf("Introduza uma linha:\n");
            line = checkInt(1, info->size[0]);

            printf("Introduza uma coluna:\n");
            column = checkInt(1, info->size[1]);

            if (info->board[line - 1][column - 1] != 0) {
                printf("Não pode colocar uma pedra numa posição já ocupada!\nJogada não é válida!\nPor favor insira nova posição!\n");
                info->validPlay = 0;
            } else if (info->board[line - 1][column - 1] == 0) {
                info->board[line - 1][column - 1] = 4;
                ++info->stone[1];
            }
        } else {
            printf("Jogada inválida, número de pedras excedido!\n");
            info->validPlay = 0;
        }
    }
}

void makePlayAddLine(gameInfo *info) {
    if (info->player == 'A') {
        if (info->addLineColumn[0] < 2) {
            boardLineRealloc(info);
            ++info->addLineColumn[0];
        } else {
            printf("Jogada inválida, número de linhas/colunas excedido!\n");
            info->validPlay = 0;
        }
    } else if (info->player == 'B') {
        if (info->addLineColumn[1] < 2) {
            boardLineRealloc(info);
            ++info->addLineColumn[1];
        } else {
            printf("Jogada inválida, número de linhas/colunas excedido!\n");
            info->validPlay = 0;
        }
    }
}

void makePlayAddColumn(gameInfo *info) {
    if (info->player == 'A') {
        if (info->addLineColumn[0] < 2) {
            boardColumnRealloc(info);
            ++info->addLineColumn[0];
        } else {
            printf("Jogada inválida, número de linhas/colunas excedido!\n");
            info->validPlay = 0;
        }
    } else if (info->player == 'B') {
        if (info->addLineColumn[1] < 2) {
            boardColumnRealloc(info);
            ++info->addLineColumn[1];
        } else {
            printf("Jogada inválida, número de linhas/colunas excedido!\n");
            info->validPlay = 0;
        }
    }
}

void showPreviousTurns(gameInfo *info) {
    gameInfo *infoAux = info;
    int turns;

    printf("Introduza quantas jogadas pretende rever:\n");
    turns = checkInt(1, info->turn);

    for (int i = 0; i < turns; ++i) {
        printf("entrou no for de rever turnos!\n");
        infoAux = infoAux->nextTurns;

        if (infoAux == NULL) {
            printf("infoAux esta null!\n");
            break;
        }

        printf("Vez do jogador %c\nTurno: %d\n", infoAux->player, infoAux->turn);

        printBoardToConsole(infoAux);
    }

    info->validPlay = 0;
}
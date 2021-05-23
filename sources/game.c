//
// Created by miguel on 5/19/21.
//

#include <stdio.h>
#include <stdlib.h>

#include "../headers/game.h"

void setInfo(gameInfo *info) {
    info->player = 'A';
    info->gameType = 0;
    info->validPlay = 0;
    info->stone[0] = 0;
    info->stone[1] = 0;
    info->addLineColumn[0] = 0;
    info->addLineColumn[1] = 0;
    info->size[0] = 0;
    info->size[1] = 0;
    info->turn = 1;
    info->winner = 0;
}

void isWinner(gameInfo *info) {
    int g = 0, y = 0, r = 0, k = info->size[1] - 1;

    //veriicar linhas
    for (int i = 0; i < info->size[0]; i++) {
        for (int j = 0; j < info->size[1]; j++) {
            if (info->board[i][j] == 1) {
                ++g;
            } else if (info->board[i][j] == 2) {
                ++y;
            } else if (info->board[i][j] == 3) {
                ++r;
            }

            if (g == info->size[1] || y == info->size[1] || r == info->size[1]) {
                info->winner = 1;
            }
        }
        g = 0;
        y = 0;
        r = 0;
    }

    //verificar colunas
    for (int i = 0; i < info->size[1]; ++i) {
        for (int j = 0; j < info->size[0]; ++j) {
            if (info->board[j][i] == 1) {
                ++g;
            } else if (info->board[j][i] == 2) {
                ++y;
            } else if (info->board[j][i] == 3) {
                ++r;
            }

            if (g == info->size[0] || y == info->size[0] || r == info->size[0]) {
                info->winner = 1;
            }
        }
        g = 0;
        y = 0;
        r = 0;
    }

    //verificar diagonais
    if (info->size[0] == info->size[1]) {
        for (int i = 0; i < info->size[0]; ++i) {
            if (info->board[i][i] == 1) {
                ++g;
            } else if (info->board[i][i] == 2) {
                ++y;
            } else if (info->board[i][i] == 3) {
                ++r;
            }
        }

        if (g == info->size[0] || y == info->size[0] || r == info->size[0]) {
            info->winner = 1;
        } else {
            g = 0;
            y = 0;
            r = 0;

            for (int i = 0; i < info->size[0]; ++i) {
                if (info->board[i][k] == 1) {
                    ++g;
                } else if (info->board[i][k] == 2) {
                    ++y;
                } else if (info->board[i][k] == 3) {
                    ++r;
                }

                --k;
            }

            if (g == info->size[0] || y == info->size[0] || r == info->size[0]) {
                info->winner = 1;
            }
        }
    }
}
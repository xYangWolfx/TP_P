//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdio.h>

#include "../headers/board.h"

void populateBoard(gameInfo *info) {
    for (int i = 0; i < info->size[0]; ++i) {
        for (int j = 0; j < info->size[1]; ++j) {
            info->board[i][j] = 0;
        }
    }
}

void printBoardToConsole(gameInfo *info) {
    for (int i = 0; i < info->size[1]; i++) {
        printf("  %d", i + 1);
    }

    printf("\n");

    for (int i = 0; i < info->size[0]; i++) {
        printf("%d", i + 1);
        for (int j = 0; j < info->size[1]; j++) {
            if (info->board[i][j] == 0) {
                printf(" - ");
            }
            if (info->board[i][j] == 1) {
                printf(" G ");
            }
            if (info->board[i][j] == 2) {
                printf(" Y ");
            }
            if (info->board[i][j] == 3) {
                printf(" R ");
            }
            if (info->board[i][j] == 4) {
                printf(" X ");
            }
        }
        printf("\n");
    }
}

void printBoardToFile(gameInfo *info, FILE *file) {
    for (int i = 0; i < info->size[1]; i++) {
        fprintf(file, "  %d", i + 1);
    }

    fprintf(file, "\n");

    for (int i = 0; i < info->size[0]; i++) {
        fprintf(file, "%d", i + 1);
        for (int j = 0; j < info->size[1]; j++) {
            if (info->board[i][j] == 0) {
                fprintf(file, " - ");
            }
            if (info->board[i][j] == 1) {
                fprintf(file, " G ");
            }
            if (info->board[i][j] == 2) {
                fprintf(file, " Y ");
            }
            if (info->board[i][j] == 3) {
                fprintf(file, " R ");
            }
            if (info->board[i][j] == 4) {
                fprintf(file, " X ");
            }
        }
        fprintf(file, "\n");
    }
    fprintf(file, "\n");
}
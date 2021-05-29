//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdio.h>

#include "../headers/board.h"

void randomizeBoard(gameInfo *info) {
    int temp;
    temp = intUniformRnd(3, 5);

    info->size[0] = temp;
    info->size[1] = temp;

    boardAlloc(info);
    populateBoard(info);
}

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
            } else if (info->board[i][j] == 1) {
                printf(" G ");
            } else if (info->board[i][j] == 2) {
                printf(" Y ");
            } else if (info->board[i][j] == 3) {
                printf(" R ");
            } else {
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
            } else if (info->board[i][j] == 1) {
                fprintf(file, " G ");
            } else if (info->board[i][j] == 2) {
                fprintf(file, " Y ");
            } else if (info->board[i][j] == 3) {
                fprintf(file, " R ");
            } else {
                fprintf(file, " X ");
            }
        }
        fprintf(file, "\n");
    }
    fprintf(file, "\n");
}
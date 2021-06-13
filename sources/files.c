//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/26/21.
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <malloc.h>

#include "../headers/game.h"
#include "../headers/utils.h"
#include "../headers/board.h"

int checkIfFileExists() {
    if (access("../saves/savegame.bin", F_OK) != -1) {
        return 1;
    } else {
        return 0;
    }
}

void saveGameToTxt(gameInfo *info) {
    gameInfo *infoAux = info;
    FILE *save;
    char fileName[100], directory[250];

    printf("Insira o nome a dar ao ficheiro:\n");
    scanf("%s", fileName);

    snprintf(directory, sizeof(directory), "../saves/%s.txt", fileName);
    save = fopen(directory, "w");
    checkFiles(save);
    reverse(&infoAux);

    if (info->gameType == 1){
        fprintf(save, "Jogador vs Jogador\n");
    } else{
        fprintf(save, "Jogador vs Computador\n");
    }

    while (infoAux->nextTurns != NULL) {
        fprintf(save, "Vez do jogador %c\nTurno: %d\n", infoAux->player, infoAux->turn);
        printBoardToFile(infoAux, save);
        infoAux = infoAux->nextTurns;
    }
    fclose(save);
}

void saveCurrentGameToBin(gameInfo *info) {
    FILE *save;
    int player, gameType;
    gameInfo *infoAux = info;
    info->gameType = 1;

    save = fopen("../saves/savegame.bin", "wb");
    checkFiles(save);

    while (infoAux != NULL) {
        if (infoAux->player == 'A') {
            player = 0;
            fwrite(&player, sizeof(player), 1, save);
        } else if (infoAux->player == 'B') {
            player = 1;
            fwrite(&player, sizeof(player), 1, save);
        }

        if (infoAux->gameType == 1) {
            gameType = 0;
            fwrite(&gameType, sizeof(gameType), 1, save);
        } else if (infoAux->gameType == 2) {
            gameType = 1;
            fwrite(&gameType, sizeof(gameType), 1, save);
        }

        fwrite(&infoAux->validPlay, sizeof(infoAux->validPlay), 1, save);
        fwrite(&infoAux->turn, sizeof(infoAux->turn), 1, save);
        fwrite(&infoAux->winner, sizeof(infoAux->winner), 1, save);

        for (int i = 0; i < 2; ++i) {
            fwrite(&infoAux->size[i], sizeof(infoAux->size[i]), 1, save);
            fwrite(&infoAux->stone[i], sizeof(infoAux->stone[i]), 1, save);
            fwrite(&infoAux->addLineColumn[i], sizeof(infoAux->addLineColumn[i]), 1, save);
        }

        for (int i = 0; i < infoAux->size[0]; ++i) {
            for (int j = 0; j < infoAux->size[1]; ++j) {
                fwrite(&infoAux->board[i][j], sizeof(infoAux->board[i][j]), 1, save);
            }
        }
        infoAux=infoAux->nextTurns;
    }
    fclose(save);
}

void resumeLastGameFromBin(gameInfo *info) {
    FILE *save;
    int player, gameType;

    save = fopen("../saves/savegame.bin", "rb");
    checkFiles(save);

    while (info != NULL) {
        fread(&player, sizeof(int), 1, save);
        if (player == 0) {
            info->player = 'A';
        } else if (player == 1) {
            info->player = 'B';
        }

        fread(&gameType, sizeof(int), 1, save);
        if (gameType == 0) {
            info->gameType = 1;
        } else if (player == 1) {
            info->gameType = 2;
        }

        fread(&info->validPlay, sizeof(info->validPlay), 1, save);
        fread(&info->turn, sizeof(info->turn), 1, save);
        fread(&info->winner, sizeof(info->winner), 1, save);

        for (int i = 0; i < 2; ++i) {
            fread(&info->size[i], sizeof(info->size[i]), 1, save);
            fread(&info->stone[i], sizeof(info->stone[i]), 1, save);
            fread(&info->addLineColumn[i], sizeof(info->addLineColumn[i]), 1, save);
        }

        boardAlloc(info);
        populateBoard(info);

        for (int i = 0; i < info->size[0]; ++i) {
            for (int j = 0; j < info->size[1]; ++j) {
                fread(&info->board[i][j], sizeof(info->board[i][j]), 1, save);
            }
        }

        if (info->turn > 0){
            info->nextTurns = (gameInfo *) malloc(sizeof(gameInfo));
        }

        info = info->nextTurns;
    }
    fclose(save);
}
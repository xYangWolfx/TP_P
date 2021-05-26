//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/26/21.
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "../headers/game.h"
#include "../headers/utils.h"
#include "../headers/board.h"

int checkIfFileExists(){
    if (access("../saves/savegame.bin", F_OK) != -1){
        return 1;
    } else{
        return 0;
    }
}

void saveGameTurns(gameInfo *info){
    gameInfo *infoAux = info;

    FILE *save;
    char fileName[100], directory[250];

    printf("Insira o nome a dar ao ficheiro:\n");
    scanf("%s", &fileName);

    snprintf(directory, sizeof(directory), "../saves/%s.txt", fileName);

    save = fopen(directory, "w");

    checkFiles(save);

    reverse(&infoAux);

    while (infoAux->nextTurns != NULL){
        fprintf(save,"Vez do jogador %c\nTurno: %d\n", infoAux->player, infoAux->turn);

        printBoardToFile(infoAux, save);

        infoAux = infoAux->nextTurns;
    }

    fclose(save);
}

void saveCurrentGame(gameInfo *info){
    printf("Salvou jogo currente");
    FILE *save;
    int player;

    info->gameType = 1;

    save = fopen("../saves/savegame.bin", "wb");

    checkFiles(save);

    if (info->player == 'A'){
        player = 0;
        fwrite(&player, sizeof(player), 1, save);
    } else if (info->player == 'B'){
        player = 1;
        fwrite(&player, sizeof(player), 1, save);
    }

    fwrite(&info->gameType, sizeof(info->gameType), 1, save);
    fwrite(&info->validPlay, sizeof(info->validPlay), 1, save);
    fwrite(&info->turn, sizeof(info->turn), 1, save);
    fwrite(&info->winner, sizeof(info->winner), 1, save);

    for (int i = 0; i < 2; ++i) {
        fwrite(&info->size[i], sizeof(info->size[i]), 1, save);
        fwrite(&info->stone[i], sizeof(info->stone[i]), 1, save);
        fwrite(&info->addLineColumn[i], sizeof(info->addLineColumn[i]), 1, save);
    }

    printf("Antes de guarda o board!");

    for (int i = 0; i < info->size[0]; ++i) {
        for (int j = 0; j < info->size[1]; ++j) {
            fwrite(&info->board[i][j], sizeof(&info->board[i][j]), 1, save);
        }
    }

    printf("Depois de guarda o board!");

    fclose(save);
}

void resumeLastGame(gameInfo *info){
    printf("Leu jogo anterior");
    FILE *save;
    int game;

    save = fopen("../saves/savegame.bin", "rb");

    checkFiles(save);

    fread(&game, sizeof(int), 1, save);
    if (game == 0){
        info->player = 'A';
    } else if (game == 1){
        info->player = 'B';
    }

    fread(&info->gameType, sizeof(int), 1, save);
    fread(&info->validPlay, sizeof(int), 1, save);
    fread(&info->turn, sizeof(int), 1, save);
    fread(&info->winner, sizeof(int), 1, save);

    for (int i = 0; i < 2; ++i) {
        fread(&info->size[i], sizeof(int), 1, save);
        fread(&info->stone[i], sizeof(int), 1, save);
        fread(&info->addLineColumn[i], sizeof(int), 1, save);
    }

    printf("Antes de guarda o board!");

    for (int i = 0; i < info->size[0]; ++i) {
        for (int j = 0; j < info->size[1]; ++j) {
            fread(&info->board[i][j], sizeof(&info->board[i][j]), 1, save);
        }
    }

    printf("Depois de guarda o board!");

    fclose(save);


}
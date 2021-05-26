//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/26/21.
//

#include <stdio.h>
#include <string.h>

#include "../headers/game.h"
#include "../headers/utils.h"
#include "../headers/board.h"

void saveGameTurns(gameInfo *info){
    gameInfo *infoAux = info;

    FILE *save;
    char fileName[100], directory[250];

    printf("Insira o nome a dar ao ficheiro:\n");
    scanf("%s", &fileName);

    snprintf(directory, sizeof(directory), "../saves/%s.txt", fileName);

    save = fopen(directory, "w");

    reverse(&infoAux);

    while (infoAux != NULL){
        fprintf(save,"Vez do jogador %c\nTurno: %d\n", infoAux->player, infoAux->turn);

        printBoardToFile(infoAux, save);

        infoAux = infoAux->nextTurns;
    }

    fclose(save);
}
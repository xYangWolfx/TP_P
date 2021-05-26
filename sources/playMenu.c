//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdio.h>

#include "../headers/play.h"
#include "../headers/utils.h"
#include "../headers/files.h"

void displayTurnsMenu(gameInfo *info) {
    int choice;
    info->validPlay = 1;

    printf("Vez do jogador %c\nTurno: %d\nSelecione a sua jogada:\n 1- Colocar cor\n 2- Colocar pedra\n 3- Inserir nova linha"
           "\n 4- Inserir nova coluna\n 5- Rever jogadas anteriores\n 6- Sair do jogo\n", info->player, info->turn);

    choice = checkInt(1, 6);

    switch (choice) {
        case 1:
            makePlayChangeColor(info);
            break;
        case 2:
            makePlayPutStone(info);
            break;
        case 3:
            makePlayAddLine(info);
            break;
        case 4:
            makePlayAddColumn(info);
            break;
        case 5:
            if(info->turn == 1){
                printf("Ainda não existem jogadas para rever!\nSelecione uma jogada válida!\n");
                info->validPlay = 0;
            } else{
                showPreviousTurns(info);
            }
            break;
        case 6:
            printf("Vai gravar em bin!");
            saveCurrentGame(info);
            printf("Gravou em bin!");
            info->gameType = 3;
            break;
    }
}
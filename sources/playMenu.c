//
// Created by miguel on 5/19/21.
//

#include <stdio.h>

#include "../headers/play.h"
#include "../headers/utils.h"

void displayTurnsMenu(gameInfo *info) {
    int choice;
    info->validPlay = 1;

    printf("Vez do jogador %c\nSelecione a sua jogada:\n 1- Colocar cor\n 2- Colocar pedra\n 3- Inserir nova linha\n 4- Inserir nova coluna\n",
           info->player);

    choice = checkInt(1, 4);

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
        default:
            break;
    }
}
//
// Created by Miguel Ferreira,
// Nº: 2020107016
// on 5/29/21.
//

#include "../headers/game.h"
#include "../headers/utils.h"
#include "../headers/autoBot.h"

//De forma aleatória gera os valores para selecionar a jogada do bot
//e as coordenadas do tabuleiro para posicionar peças
void autoPlay(gameInfo *info, coordinates *play) {
    int moveChoice;

    //Jogada é sempre válida até alguma verificação detetar o contrário
    info->validPlay=1;

    printf("Vez do jogador %c (Computador)\nTurno: %d\n", info->player, info->turn);

    moveChoice = intUniformRnd(1, 4);

    if (moveChoice == 1 || moveChoice == 2) {
        play->lines = intUniformRnd(1, info->size[0]);
        play->columns = intUniformRnd(1, info->size[1]);
    }

    switch (moveChoice) {
        case 1:
            botChangeColor(info, play);
            break;
        case 2:
            botPutStone(info, play);
            break;
        case 3:
            botAddLine(info);
            break;
        case 4:
            botAddColumn(info);
            break;
    }
}
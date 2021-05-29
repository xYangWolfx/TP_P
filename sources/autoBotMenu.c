//
// Created by miguel on 5/29/21.
//

#include "../headers/game.h"
#include "../headers/utils.h"
#include "../headers/play.h"
#include "../headers/autoBot.h"

void autoPlay(gameInfo *info, coordinates *play){
    int moveChoice;

    moveChoice = intUniformRnd(1, 4);
    play->lines = intUniformRnd(1, info->size[0]);
    play->columns = intUniformRnd(1, info->size[1]);

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
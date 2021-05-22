//
// Created by miguel on 5/19/21.
//

#include <stdlib.h>

#include "../headers/game.h"

void setInfo(gameInfo *info){
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
}
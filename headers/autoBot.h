//
// Created by miguel on 5/29/21.
//

#ifndef SEMAFOROTP_AUTOBOT_H
#define SEMAFOROTP_AUTOBOT_H

void autoPlay(gameInfo *info, coordinates *play);

void botChangeColor(gameInfo *info, coordinates *play);

void botPutStone(gameInfo *info, coordinates *play);

void botAddLine(gameInfo *info);

void botAddColumn(gameInfo *info);

#endif //SEMAFOROTP_AUTOBOT_H

//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//
#ifndef SEMAFOROTP_PLAY_H
#define SEMAFOROTP_PLAY_H

#include "game.h"

//Realização de jogadas

//Pedir ao utilizador linhas e colunas para colocar peças
void askPosition(gameInfo *info, coordinates *play);

//Realiza a jogada de inserir/alterar cores do tabuleiro
void makePlayChangeColor(gameInfo *info, coordinates *play);

//Realiza a jogada de colocar a pedra no tabuleiro
void makePlayPutStone(gameInfo *info, coordinates *play);

//Realiza a jogada de inserir uma nova linha no tabuleiro
void makePlayAddLine(gameInfo *info);

//Realiza a jogada de inserir uma nova coluna no tabuleiro
void makePlayAddColumn(gameInfo *info);

//Mostrar "x" jogadas anteriores pedidas pelo utilizador
void showPreviousTurns(gameInfo *info);

#endif //SEMAFOROTP_PLAY_H
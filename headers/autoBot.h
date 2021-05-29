//
// Created by Miguel Ferreira,
// Nº: 2020107016
// on 5/29/21.
//

#ifndef SEMAFOROTP_AUTOBOT_H
#define SEMAFOROTP_AUTOBOT_H

//Função do ficheiro "autoBotMenu.c"
//Escolhe de forma aleatória a jogada a executar pelo bot
//e escolhe de forma aleatória as coordenadas do tabuleiro
// para colocar as peças
void autoPlay(gameInfo *info, coordinates *play);

//Função do ficheiro "autoBotPlay.c"
//Chama a jogada para o bot alterar a cor de uma
//posição aleatória no tabuleiro
void botChangeColor(gameInfo *info, coordinates *play);

//Chama a jogada para o bot colocar uma pedra numa
// posição aleatória no tabuleiro
void botPutStone(gameInfo *info, coordinates *play);

//Chama a jogada para o bot adicionar uma linha ao tabuleiro
void botAddLine(gameInfo *info);

//Chama a jogada para o bot adicionar uma coluna ao tabuleiro
void botAddColumn(gameInfo *info);

#endif //SEMAFOROTP_AUTOBOT_H

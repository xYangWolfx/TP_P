//
// Created by Miguel Ferreira on 5/19/21.
//

#ifndef SEMAFOROTP_BOARD_H
#define SEMAFOROTP_BOARD_H

#include "game.h"
#include "utils.h"

//Alocação da memória para o tabuleiro inicial
void boardAlloc(gameInfo *info);

//Realocação de memória para a jogada de adicionar nova linha ao tabuleiro
void boardLineRealloc(gameInfo *info);

//Realocação de memória para a jogada de adicionar nova coluna ao tabuleiro
void boardColumnRealloc(gameInfo *info);

//Limpeza da memória alocada ao tabuleiro, no final do jogo
void cleanBoardAlloc(gameInfo *info);

//Preechimento do tabuleiro com os valores iniciais
void populateBoard(gameInfo *info);

//Imprime o tabuleiro para a consola
void printBoard(gameInfo *info);

#endif //SEMAFOROTP_BOARD_H
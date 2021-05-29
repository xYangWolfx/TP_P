//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#ifndef SEMAFOROTP_BOARD_H
#define SEMAFOROTP_BOARD_H

#include <stdio.h>

#include "game.h"
#include "utils.h"

//Funções do ficheiro "boardAlloc.c"
//Gerar de forma aleatória o tamanho das linhas
// e das colunas do tabuleiro
void randomizeBoard(gameInfo *info);

//Alocação da memória para o tabuleiro inicial
void boardAlloc(gameInfo *info);

//Realocação de memória para a jogada de adicionar nova linha ao tabuleiro
void boardLineRealloc(gameInfo *info);

//Realocação de memória para a jogada de adicionar nova coluna ao tabuleiro
void boardColumnRealloc(gameInfo *info);

//Limpeza da memória alocada ao tabuleiro, no final do jogo
void cleanBoardAlloc(gameInfo *info);

//Funções do ficheiro "board.c"
//Preechimento do tabuleiro com os valores iniciais
void populateBoard(gameInfo *info);

//Imprime o tabuleiro para a consola
void printBoardToConsole(gameInfo *info);

//Imprime o tabuleiro para um ficheiro
void printBoardToFile(gameInfo *info, FILE *file);

#endif //SEMAFOROTP_BOARD_H
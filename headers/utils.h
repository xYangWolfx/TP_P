//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#ifndef SEMAFOROTP_UTILS_H
#define SEMAFOROTP_UTILS_H

#include "game.h"

// Inicializa o gerador de numeros aleatorios.
// Esta funcao deve ser chamada apenas uma vez no inicio da execucao do programa
void initRandom();

//Devolve um valor inteiro aleatorio distribuido uniformemente entre [a, b]
int intUniformRnd(int a, int b);

//Limpeza do buffer de leitura de input do utilizador
void cleanBufferStdin();

//Validar o input do utilizador, certificando que é um inteiro dentro dos valores permitidos
int checkInt(int min, int max);

//Inverter ordem da lista ligada para apresentar as jogadas da mais
//antiga para a mais recente quando o utilizador pede para rever jogadas
void reverse(gameInfo** info);

//Invalida a alocação de memória da estrutura
void checkAllocMemory(gameInfo *info);

//Invalida a alocação de memória do tabuleiro principal
void checkBoardAllocMemory(gameInfo *info, int position);

//Invalida a realocação de memória do tabuleiro auxiliar para nova alocação de memória do tabuleiro principal
void checkAllocMemoryAux(int **board);

#endif //SEMAFOROTP_UTILS_H
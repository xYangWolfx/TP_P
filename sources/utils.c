//
// Created by miguel on 5/19/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../headers/utils.h"

void initRandom() {
    srand(time(NULL));
}

int intUniformRnd(int a, int b) {
    return a + rand() % (b - a + 1);
}

//funcao para limpar o buffer
void cleanBufferStdin() {
    int chr;
    do {
        chr = getchar();
    } while (chr != '\n' && chr != EOF && chr != '\0');
}

//Lê um valor inteiro dentro de um intervalo dado e protege contra a inserção de um caracter
int checkInt(int min, int max) {
    int option;
    char entryChar[100];
    do {
        do {
            scanf("%s", entryChar);
            cleanBufferStdin();
            if (sscanf(entryChar, "%d", &option) != 1) {
                printf("Caracter inválido, insira uma opção válida!\n");
            }
        } while (sscanf(entryChar, "%d", &option) != 1);

        if (option < min || option > max) {
            printf("Introduziu valores fora do alcance permitido!\nInsira uma opção válida!\n");
        }
    } while (option < min || option > max);
    return option;
}

//Invalida a alocação de memória do tabuleiro principal
void checkAllocMemory(gameInfo *info, int position) {
    if (position == 0) {
        if (info->board == NULL) {
            printf("Erro de alocação de memória!");
            exit(0);
        }
    } else {
        if (info->board[position] == NULL) {
            printf("erro de alocacao de memoria!");
            exit(0);
        }
    }
}

//Invalida a realocação de memória do tabuleiro auxiliar para nova alocação de memória do tabuleiro principal
void checkAllocMemoryAux(int **board) {
    if (board == NULL) {
        printf("Erro de alocação de memória!");
        exit(0);
    }
}
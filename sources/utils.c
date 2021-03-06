//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
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

void reverse(gameInfo** info){
    gameInfo* prev = NULL;
    gameInfo* current = *info;
    gameInfo* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->nextTurns;

        // Reverse current node's pointer
        current->nextTurns = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *info = prev;
}

//Invalida a alocação de memória da estrutura
void checkAllocMemory(gameInfo *info) {
    if (info == NULL) {
        printf("Erro de alocação de memória!");
        exit(0);
    }
}

//Invalida a alocação de memória do tabuleiro principal
void checkBoardAllocMemory(gameInfo *info, int position) {
    if (position == 0) {
        if (info->board == NULL) {
            printf("Erro de alocação de memória!");
            exit(0);
        }
    } else {
        if (info->board[position] == NULL) {
            printf("Erro de alocacao de memoria!");
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

//Validar se a criação do ficheiro foi efetuada com sucesso
void checkFiles(FILE *file) {
    if (file == NULL) {
        printf("Erro ao criar ficheiro!");
        exit(1);
    }
}
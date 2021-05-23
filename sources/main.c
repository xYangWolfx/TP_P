#include <stdio.h>
#include <stdlib.h>

#include "../headers/utils.h"
#include "../headers/board.h"
#include "../headers/menu.h"

int main() {
    printf("Hello, World!\n");
    gameInfo *info = (gameInfo *) malloc(sizeof(gameInfo));
    initRandom();
    setInfo(info);

    int temp, column, line, mode;
    temp = intUniformRnd(3, 5);
    info->size[0] = temp;
    info->size[1] = temp;

    boardAlloc(info);
    populateBoard(info);

    while (info->gameType == 0) {
        displayMenu(info);
    }

    //jogo Jogador vs Jogador
    while (info->gameType == 1) {

        do {
            printBoard(info);

            displayTurnsMenu(info);
        } while (info->validPlay != 1);

        isWinner(info);

        if (info->winner == 0) {
            if (info->player == 'A') {
                info->player = 'B';
            } else if (info->player == 'B') {
                info->player = 'A';
            }
            ++info->turn;
        } else {
            printBoard(info);
            printf("Parabéns jogador %c, ganhou o jogo!", info->player);
            info->gameType = 0;
            cleanBoardAlloc(info);
        }
    }

    //jogo Jogador vs Computador
    while (info->gameType == 2) {

    }

    return 0;
}
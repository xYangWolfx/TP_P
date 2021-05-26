#include <stdio.h>
#include <stdlib.h>

#include "../headers/utils.h"
#include "../headers/board.h"
#include "../headers/menu.h"
#include "../headers/saves.h"

int main() {
    initRandom();
    gameInfo *info = (gameInfo*) malloc(sizeof(gameInfo));

    checkAllocMemory(info);

    do {
        setInfo(info);

        int temp;
        temp = intUniformRnd(3, 5);
        info->size[0] = temp;
        info->size[1] = temp;

        boardAlloc(info);
        populateBoard(info);

        while (info->gameType == 0) {
            displayMenu(info);
        }

        //Jogo Jogador vs Jogador
        while (info->gameType == 1) {
            do {
                printBoard(info);
                displayTurnsMenu(info);
            } while (info->validPlay != 1);

            saveTurn(info);

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
                printf("Parabéns jogador %c, ganhou o jogo!\n", info->player);
                newGame(info);
                cleanBoardAlloc(info);
            }
        }

        //Jogo Jogador vs Computador
        while (info->gameType == 2) {

        }
    } while (info->gameType == 0);

    printf("Obrigado por jogar!");

    return 0;
}
//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdio.h>
#include <stdlib.h>

#include "../headers/utils.h"
#include "../headers/board.h"
#include "../headers/menu.h"
#include "../headers/files.h"

int main() {
    initRandom();
    gameInfo *info = (gameInfo *) malloc(sizeof(gameInfo));

    checkAllocMemory(info);

    do {
        setInfo(info);
        int temp;
        temp = checkIfFileExists();

        if (temp == 1){
            printf("Ficheiro encontrado\n");
            resumeLastGame(info);
        } else{
            temp = intUniformRnd(3, 5);
            info->size[0] = temp;
            info->size[1] = temp;

            boardAlloc(info);
            populateBoard(info);
        }

        while (info->gameType == 0) {
            displayMenu(info);
        }

        //Jogo Jogador vs Jogador
        while (info->gameType == 1) {
            do {
                printBoardToConsole(info);
                displayTurnsMenu(info);
            } while (info->validPlay != 1);

            saveTurns(&info);

            isWinner(info);

            if (info->winner == 0 && info->gameType == 1) {
                if (info->player == 'A') {
                    info->player = 'B';
                } else if (info->player == 'B') {
                    info->player = 'A';
                }
                ++info->turn;
            } else if (info->winner == 1 && info->gameType == 1){
                printBoardToConsole(info);
                printf("Parabéns jogador %c, ganhou o jogo!\n", info->player);
                saveGameTurns(info);
                newGame(info);
                cleanBoardAlloc(info);
            }
        }

        //Jogo Jogador vs Computador
        while (info->gameType == 2) {

        }
    } while (info->gameType == 0);

    return 0;
}
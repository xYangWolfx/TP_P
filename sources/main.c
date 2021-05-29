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
#include "../headers/autoBot.h"

int main() {
    initRandom();
    gameInfo *info = (gameInfo *) malloc(sizeof(gameInfo));
    coordinates *play=(coordinates *) malloc(sizeof(coordinates));

    checkAllocMemory(info);

    do {
        setInfo(info);
        int check = checkIfFileExists();

        if (check == 1){
            resumeLastGame(info);
        } else if (check == 0){
            randomizeBoard(info);
        }

        while (info->gameType == 0) {
            displayMenu(info);
        }

        //Jogo Jogador vs Jogador
        while (info->gameType == 1) {
            do {
                printBoardToConsole(info);
                displayTurnsMenu(info, play);
            } while (info->validPlay != 1);

            saveTurns(&info);

            isWinner(info);

            if (info->winner == 0 && info->gameType == 1) {
                changePlayer(info);
            } else if (info->winner == 1 && info->gameType == 1){
                printBoardToConsole(info);
                printf("Parabéns jogador %c, ganhou o jogo!\n", info->player);
                saveGameToTxt(info);
                newGame(info);
                cleanBoardAlloc(info);
            }
        }

        //Jogo Jogador vs Computador
        while (info->gameType == 2) {
            if (info->player == 'A'){
                do {
                    printBoardToConsole(info);
                    displayTurnsMenu(info, play);
                } while (info->validPlay != 1);
            } else if (info->player == 'B'){
                do {
                    autoPlay(info, play);
                } while (info->validPlay != 1);
            }

            saveTurns(&info);

            isWinner(info);

            if (info->winner == 0 && info->gameType == 2) {
                changePlayer(info);
            } else if (info->winner == 1 && info->gameType == 2){
                printBoardToConsole(info);
                printf("Parabéns jogador %c, ganhou o jogo!\n", info->player);
                saveGameToTxt(info);
                newGame(info);
                cleanBoardAlloc(info);
            }
        }
    } while (info->gameType == 0);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#include "../headers/utils.h"
#include "../headers/board.h"
#include "../headers/game.h"
#include "../headers/menu.h"
#include "../headers/play.h"

int main() {
    printf("Hello, World!\n");
    gameInfo *info = (gameInfo*)malloc(sizeof(gameInfo));
    initRandom();
    setInfo(info);

    int temp, column, line, mode;
    temp = intUniformRnd(3,5);
    info->size[0]=temp;
    info->size[1]=temp;

    boardAlloc(info);
    populateBoard(info);

    while (info->gameType==0){
        displayMenu(info);
    }

    while (info->gameType==1){

        printBoard(info);

        makePlayChangeColor(info);

        printBoard(info);

        makePlayPutStone(info);

        printBoard(info);

        makePlayAddLine(info);

        printf("realocacao de memoria\n");

        printBoard(info);

        makePlayAddColumn(info);

        printf("realocacao de memoria\n");

        if (info->player == 'A'){
            info->player = 'B';
        } else if (info->player == 'B'){
            info->player = 'A';
        }

        //game = 0;
    }

    return 0;
}

//
// Created by Miguel Ferreira on 5/19/21.
//

#ifndef SEMAFOROTP_GAME_H
#define SEMAFOROTP_GAME_H

typedef struct gameInfo gameInfo;

struct gameInfo{
    //tamanho do tabuleiro
    int **board;

    int gameType;

    //jogador atual
    char player;

    //Array para guardar quantas pedras podem ser utilizadas
    int stone[2];

    //Array para guardar quantas linhas/colunas podem ser utilizadas
    int addLineColumn[2];

    //dimensão do tabuleiro
    int size[2];

    //numero de turnos
    int turn;

    //armazenar jogadas
    int play[3];

    //lista ligada
    struct gameInfo * nextGame;
};

void setInfo(gameInfo *info);

#endif //SEMAFOROTP_GAME_H

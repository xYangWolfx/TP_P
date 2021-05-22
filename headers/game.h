//
// Created by Miguel Ferreira on 5/19/21.
//

#ifndef SEMAFOROTP_GAME_H
#define SEMAFOROTP_GAME_H

typedef struct gameInfo gameInfo;

struct gameInfo{
    //tamanho do tabuleiro
    int **board;

    //jogador atual
    char player;

    //tipo de jogo, 0 para Jogador vs Jogador e 1 para Jogador vs Computador
    int gameType;

    //validade da jogada, 0 para inválido e 1 para valido
    int validPlay;

    //Array para guardar quantas pedras podem ser utilizadas
    int stone[2];

    //Array para guardar quantas linhas/colunas podem ser utilizadas
    int addLineColumn[2];

    //dimensão do tabuleiro, size[0] para as linhas e size[1] para as colunas
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

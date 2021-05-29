//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#ifndef SEMAFOROTP_GAME_H
#define SEMAFOROTP_GAME_H

typedef struct gameInfo gameInfo;

struct gameInfo {
    //tamanho do tabuleiro
    int **board;

    //dimensão do tabuleiro, size[0] para as linhas e size[1] para as colunas
    int size[2];

    //jogador atual
    char player;

    //tipo de jogo, 0 para navegar nos menus, 1 para Jogador vs Jogador,
    //2 para Jogador vs Computador e 3 para sair do jogo
    int gameType;

    //validade da jogada, 0 para inválido e 1 para valido
    int validPlay;

    //Array para guardar quantas pedras podem ser utilizadas
    int stone[2];

    //Array para guardar quantas linhas/colunas podem ser utilizadas
    int addLineColumn[2];

    //numero de turnos
    int turn;

    //indicar se o jogo terminou, 0 para "a decorrer" e 1 para "vitória"
    int winner;

    //lista ligada
    struct gameInfo *nextTurns;
};

//estutura para guardar as coordenadas do tabuleiro inseridas pelo utilizador
typedef struct coordinates coordinates;

struct coordinates {
    int lines;
    int columns;
};

void setInfo(gameInfo *info);

void changePlayer(gameInfo *info);

void saveTurns(gameInfo **info);

void isWinner(gameInfo *info);

#endif //SEMAFOROTP_GAME_H
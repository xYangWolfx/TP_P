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

//Estrutura para guardar as coordenadas do tabuleiro inseridas pelo utilizador
typedef struct coordinates coordinates;

struct coordinates {
    int lines;
    int columns;
};

//Preenche o conteúdo da estrutura no início de um novo jogo
void setInfo(gameInfo *info);

//Função para alterar o jogagor no final de cada turno
void changePlayer(gameInfo *info);

//Função para gravar o estado do tabuleiro, turno e jogador
// para consulta de jogadas anteriores
void saveTurns(gameInfo **info);

//Função para verificar se algum jogador ganhou no final de cada turno
void isWinner(gameInfo *info);

#endif //SEMAFOROTP_GAME_H
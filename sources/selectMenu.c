//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#include <stdio.h>

#include "../headers/game.h"
#include "../headers/utils.h"

void displayPlayMenu(gameInfo *info) {
    int gameType;

    printf("Que tipo de jogo pretende?\n");
    printf("  1- Jogador vs Jogador\n  2- Jogador vs Computador\n  3- Voltar ao menuprincipal\n");

    gameType = checkInt(1, 3);

    switch (gameType) {
        case 1:
            info->gameType = 1;
            break;
        case 2:
            info->gameType = 2;
            break;
        case 3:
            break;
    }
}

void displayMenu(gameInfo *info) {
    int choice;

    printf("Selecione uma opção: \n");
    printf("  1- Jogar\n  2- Regras\n  3- Créditos\n  4- Sair\n");

    choice = checkInt(1, 4);

    switch (choice) {
        case 1:
            displayPlayMenu(info);
            break;

        case 2:
            printf("O jogo do semáforo desenrola-se num tabuleiro dividido em células. No início, o tabuleiro\n"
                   "está vazio. Alternadamente os jogadores vão colocando peças de cor Verde (G), Amarela\n"
                   "(Y) ou Vermelha (R). Ganha o jogador que coloque uma peça que permita formar uma linha,\n"
                   "coluna ou diagonal completa com peças da mesma cor.\n");
            printf("As jogadas possíveis por parte dos jogadores são:\n1. Colocar uma peça Verde numa célula vazia\n"
                   "2. Trocar uma peça Verde que esteja colocada no tabuleiro por uma peça Amarela\n"
                   "3. Trocar uma peça Amarela que esteja colocada no tabuleiro por uma peça Vermelha\n"
                   "4. Colocar uma pedra numa célula vazia. Cada jogador pode colocar, no máximo, uma pedra por jogo.\n"
                   "A colocação de uma pedra inviabiliza que o jogo possa terminar por preenchimento da linha e coluna\n"
                   "afetadas (e, eventualmente também da diagonal ou diagonais).\n"
                   "5. Adicionar uma linha ou uma coluna ao final do tabuleiro. Esta jogada adiciona linhas ou colunas\n"
                   "completas e vazias ao tabuleiro de jogo.(Cada jogador pode efetuar esta jogada, no máximo, duas vezes por jogo.\n"
                   "6. O jogador pode ainda, antes de efetuar a sua jogada, rever as jogadas efetuadas por ambos os \n"
                   "jogadores nos turnos anteriores.");
            break;
        case 3:
            printf("\nTrabalho realizado por:\nMiguel Ângelo Rodrigues Ferreira\nNº: 2020107016\nLicenciatura de Engenharia Informática"
                   "\nISEC\nUnidade Curricular: Programação\n");
            displayMenu(info);
            break;

        case 4:
            printf("Obrigado por jogar!");
            info->gameType = 3;
            break;
    }
}

void newGame(gameInfo *info) {
    int choice;

    printf("Pretende iniciar um novo jogo?\n  1- Sim (Voltar ao menu principal)\n  2- Não (Sair da aplicação)\n");

    choice = checkInt(1, 2);

    if (choice == 1) {
        info->gameType = 0;
    } else {
        info->gameType = 3;
    }
}
//
// Created by miguel on 5/19/21.
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
    printf("  1- Jogar\n  2- Créditos\n  3- Sair\n");

    choice = checkInt(1, 3);

    switch (choice) {
        case 1:
            displayPlayMenu(info);
            break;

        case 2:
            printf("\nTrabalho realizado por:\nMiguel Ângelo Rodrigues Ferreira\nNº: 2020107016\nLicenciatura de Engenharia Informática"
                   "\nISEC\nUnidade Curricular: Programação\n");
            displayMenu(info);
            break;

        case 3:
            printf("Obrigado por jogar!");
            info->gameType = 3;
            break;

        default:
            displayMenu(info);
            break;
    }
}
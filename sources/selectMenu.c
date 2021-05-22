//
// Created by miguel on 5/19/21.
//

#include <stdio.h>

#include "../headers/game.h"
#include "../headers/play.h"
#include "../headers/utils.h"

void displayPlayMenu(gameInfo *info) {
    int gameType, validChoice = 0;
    char term;

    do {
        printf("Que tipo de jogo pretende?\n");
        printf("  1- Jogador vs Jogador\n  2- Jogador vs Computador\n  3- Voltar ao menuprincipal\n");
        if(scanf("%d%c", &gameType, &term) != 2 || term != '\n'){
            cleanBufferStdin();
            printf("Carácter inválido, insira uma opção válida!\n");
        }
        else{
            if(gameType < 1 || gameType > 3){
                printf("Insira uma opção válida!\n");
            }else{
                validChoice = 1;
            }
        }
    } while (validChoice != 1);

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
    int choice, validChoice = 0;
    char term;

    do {
        printf("Selecione uma opção: \n");
        printf("  1- Jogar\n  2- Créditos\n  3- Sair\n");
        if(scanf("%d%c", &choice, &term) != 2 || term != '\n'){
            cleanBufferStdin();
            printf("Carácter inválido, insira uma opção válida!\n");
        }
        else{
            if(choice < 1 || choice > 3){
                printf("Insira uma opção válida!\n");
            }else{
                validChoice = 1;
            }
        }
    } while (validChoice != 1);

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
            info->gameType=3;
            break;

        default:
            displayMenu(info);
            break;
    }
}

void displayTurnsMenu(gameInfo *info){
    int choice, validChoice = 0;
    char term;
    info->validPlay = 1;

    do {
        printf("Vez do jogador %c\nSelecione a sua jogada:\n 1- Colocar cor\n 2- Colocar pedra\n 3- Inserir nova linha\n 4- Inserir nova coluna\n", info->player);
        if(scanf("%d%c", &choice, &term) != 2 || term != '\n'){
            cleanBufferStdin();
            printf("Carácter inválido, insira uma opção válida!\n");
        }
        else{
            if (choice < 1 || choice > 4){
                printf("Insira uma opção válida!\n");
            }else{
                validChoice = 1;
            }
        }
    } while (validChoice != 1);

    switch (choice) {
        case 1:
            makePlayChangeColor(info);
            break;
        case 2:
            makePlayPutStone(info);
            break;
        case 3:
            makePlayAddLine(info);
            break;
        case 4:
            makePlayAddColumn(info);
            break;
        default:
            break;
    }
}
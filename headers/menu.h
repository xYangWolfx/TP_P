//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/19/21.
//

#ifndef SEMAFOROTP_MENU_H
#define SEMAFOROTP_MENU_H

//Mostrar o menu de opções na consola e receber inputs do utilizador
void displayMenu(gameInfo *info);

//Mostrar menu de opções de jogadas e receber inputs do utilizador
void displayTurnsMenu(gameInfo *info, coordinates *play);

//Dar opção ao utilizador de jogar um novo jogo ou sair da aplicação
void newGame(gameInfo *info);

//Dar opção ao jogador de resumir o último jogo interrompido caso
// seja detetado um ficheiro binário
void resumeLastGame(gameInfo *info);

#endif //SEMAFOROTP_MENU_H
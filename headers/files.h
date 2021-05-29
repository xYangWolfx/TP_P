//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/26/21.
//

#ifndef SEMAFOROTP_FILES_H
#define SEMAFOROTP_FILES_H

//Verificar se existe um ficheiro binário de algum
// jogo anterior na diretoria de "saves"
int checkIfFileExists();

//Gravar todas as jogadas após uma vitória num ficheiro ".txt" para consulta
void saveGameToTxt(gameInfo *info);

//Gravar jogo no momento atual para um ficheiro binário
// após um jogador decidir sair do jogo
void saveCurrentGameToBin(gameInfo *info);

//Lê informações de um fiheiro binário para resumir o último jogo,
// caso tenha sido interrompido pelo utilizador
void resumeLastGameFromBin(gameInfo *info);

#endif //SEMAFOROTP_FILES_H

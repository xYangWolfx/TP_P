//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/26/21.
//

#ifndef SEMAFOROTP_FILES_H
#define SEMAFOROTP_FILES_H

int checkIfFileExists();

void saveGameTurns(gameInfo *info);

void saveCurrentGame(gameInfo *info);

void resumeLastGame(gameInfo *info);

#endif //SEMAFOROTP_FILES_H

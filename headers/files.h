//
// Created by Miguel Ferreira,
// Nº: 2020107016,
// on 5/26/21.
//

#ifndef SEMAFOROTP_FILES_H
#define SEMAFOROTP_FILES_H

int checkIfFileExists();

void saveGameToTxt(gameInfo *info);

void saveCurrentGameToBin(gameInfo *info);

void resumeLastGameFromBin(gameInfo *info);

#endif //SEMAFOROTP_FILES_H

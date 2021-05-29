cmake_minimum_required(VERSION 3.19)
project(semaforotp C)

set(CMAKE_C_STANDARD 99)

add_executable(semaforotp sources/main.c headers/board.h headers/game.h headers/menu.h headers/play.h headers/utils.h sources/board.c sources/boardAlloc.c sources/game.c sources/play.c sources/playMenu.c sources/selectMenu.c sources/utils.c sources/files.c headers/files.h sources/autoBotMenu.c headers/autoBot.h sources/autoBotPlay.c)
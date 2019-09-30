#ifndef   __GAME__H_
#define  __GAME__H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define SIZE 10
#define ROWS  ROW+2
#define COLS  COL+2
void InitBoard(char board[][ROWS], int row, int col, int set);
void Show(char board[][ROWS], int row, int col);
void SetMine(char mine[][ROWS], int row, int col);
void FindMine(char mineInfo[][ROWS], char mine[][ROWS], int row, int col);
#endif

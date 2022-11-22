#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COI 9
#define IPUNT 10
#define COIS COI+2
#define ROWS ROW+2

void initialize(char shos[ROWS][COIS], int rows, int cois,char set);

void checkerboard(char shos[ROWS][COIS], int row, int coi);
void steRay(char shos[ROWS][COIS], int row, int coi);
void minesweeping(char shos[ROWS][COIS],char cho[ROWS][COIS], int row, int coi);



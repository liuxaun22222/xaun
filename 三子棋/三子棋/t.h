#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define row 3
#define age 3
//初始化棋盘
void Initialization(char arr[row][age], int a, int b);
//打印棋盘
void Initiaboard(char arr[row][age], int a, int b);
//电脑玩家
void ComputerPlayey(char arr[row][age], int a, int b);
//玩家
void gameplayer(char arr[row][age], int a, int b);

char InWin(char arr[row][age], int a, int b);
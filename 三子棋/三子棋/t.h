#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define row 3
#define age 3
//��ʼ������
void Initialization(char arr[row][age], int a, int b);
//��ӡ����
void Initiaboard(char arr[row][age], int a, int b);
//�������
void ComputerPlayey(char arr[row][age], int a, int b);
//���
void gameplayer(char arr[row][age], int a, int b);

char InWin(char arr[row][age], int a, int b);
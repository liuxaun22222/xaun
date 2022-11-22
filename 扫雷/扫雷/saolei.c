#define _CRT_SECURE_NO_WARNINGS 1

#include "saolei.h"
//��ʼ��
void initialize(char shos[ROWS][COIS], int rows, int cois,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cois; j++)
		{
			shos[i][j] = set;
		}
	}
}
//��ӡ����
void checkerboard(char shos[ROWS][COIS], int row, int coi)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= coi; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= coi; j++)
		{
			printf("%c ", shos[i][j]);
		}
		printf("\n");
	}
}
//������
void steRay(char shos[ROWS][COIS], int row, int coi)
{
	int ipunt = IPUNT;
	while (ipunt)
	{
		int x = rand() % row+ 1;
		int y = rand() % coi + 1;
		if (shos[x][y] == '0')
		{
			shos[x][y] = '1';
			ipunt--;
		}
	}
}
int ge_mine(char shos[ROWS][COIS], int x, int y)
{
	return shos[x - 1][y] +
		shos[x - 1][y - 1] +
		shos[x][y - 1] +
		shos[x + 1][y - 1] +
		shos[x + 1][y] +
		shos[x + 1][y + 1] +
		shos[x][y + 1] +
		shos[x - 1][y + 1] - 8 * '0';

}
void minesweeping(char shos[ROWS][COIS], char cho[ROWS][COIS], int row, int coi)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win < row*coi-IPUNT)
	{
		printf("������Ҫ�µ����꣺��\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= coi)
		{
			if (shos[x][y] == '1')
			{
				printf("������\n");
				checkerboard(shos, row, coi);
				break;
			}
			else
			{
				int ret  = ge_mine(shos,row,coi);
				shos[x][y] = ret + '0';
				checkerboard(cho, row, coi);
				win++;
			}
		}
		else
		{
			printf("����������Ѿ����ڸ�����;����������\n");
		}
	}
	if (win == row * coi - IPUNT)
	{
		printf("��ϲ�㣬Ӯ��\n");
	}
}


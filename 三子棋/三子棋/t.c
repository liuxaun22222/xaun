#define _CRT_SECURE_NO_WARNINGS 1

#include "t.h"
//��ʼ������
void Initialization(char arr[row][age], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < b; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
//��ӡ����
void Initiaboard(char arr[row][age], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < b; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < b - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < a - 1)
		{
			for (j = 0; j < b; j++)
			{
				printf("---");
				if (j < b - 1)
					printf("|");
			}
		}
		printf("\n");

	}

}
//���
void gameplayer(char arr[row][age], int a, int b)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while(1)
	{
		printf("������Ҫ�ߵ�λ�� :>>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= a && y >= 0 && y <= b)
		{
			if(arr[x-1][y-1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("�����Ѿ�����������\n");
		}
	}
}
//�������
void ComputerPlayey(char arr[row][age], int a, int b)
{
	int x = 0;
	int y = 0;
	printf("������:>>\n");
	while (1)
	{
		x = rand() % a;
		y = rand() % b;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}
//�ж���Ӯ
int IsFull(char arr[row][age], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < b; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char InWin(char arr[row][age], int a, int b)
{
	int i = 0;
	//������
	for (i = 0; i < a; i++)
	{
		if (arr[i][0] == arr[i][1]
			&& arr[i][1] == arr[i][2]
			&& arr[i][1] != ' ')
		{
			return arr[i][0];
		}
	}
	//������
	for (i = 0; i < b; i++)
	{
		if (arr[0][i] == arr[1][i]
			&& arr[1][i] == arr[2][i]
			&& arr[1][i] != ' ')
		{
			return arr[0][i];
		}
	}
		if (arr[0][0] == arr[1][1]
			&& arr[1][1] == arr[2][2]
			&& arr[1][1] != ' ')
		{
			return arr[1][1];
		}
		if (arr[0][2] == arr[1][1]
			&& arr[1][1] == arr[2][0]
			&& arr[1][1] != ' ')
		{
			return arr[1][1];
		}
	
	if (1 == IsFull(arr, row, age))
	{
		return 'q';
	}
	return 'c';
}
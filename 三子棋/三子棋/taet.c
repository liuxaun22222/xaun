#define _CRT_SECURE_NO_WARNINGS 1
#include "t.h"
void mesa()
{
	printf("#########################\n");
	printf("#####1.play   0.enst ####\n");
	printf("#########################\n");
}
void  getu()
{
	char ret = 0;
	char arr[row][age] = {0};
	//初始化棋盘
	Initialization(arr,row, age);
	//打印棋盘
	Initiaboard(arr, row, age);
	while(1)
	{
		//玩家
		gameplayer(arr, row, age);
		//打印棋盘
		Initiaboard(arr, row, age);
		//判断输赢
		ret = InWin(arr, row, age);
		if (ret != 'c')
		{
			break;
		}
		//电脑玩家
		ComputerPlayey(arr, row, age);
		//打印棋盘
		Initiaboard(arr, row, age);
		//判断输赢
		ret = InWin(arr, row, age);
		if (ret != 'c')
		{
			break;
		}
	     else if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
			printf("平局\n");
	}
}
int main()
{
	int ipout = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mesa();
		printf("请输入：》》");
		scanf("%d", &ipout);
		switch (ipout)
		{
		case 1:
			getu();
			break;
		case 0:
			printf("退出成功\n");
			break;
		default:printf("选择错误\n");
		}
	} while (ipout);
	return;
}
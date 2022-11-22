#define _CRT_SECURE_NO_WARNINGS 1

#include "saolei.h"
void meun()
{
	printf("########################\n");
	printf("########################\n");
	printf("######1.play 0.exit#####\n");
	printf("########################\n");
	printf("########################\n");
}
void game()
{
	///布置雷的信息
	char shos[ROWS][COIS] = { 0 };
	//排查出雷的信息
	char sho[ROWS][COIS] = { 0 };
	//初始化
	initialize(shos, ROWS, COIS, '0');
	initialize(sho, ROWS, COIS,'*');
	//打印棋盘
	//checkerboard(shos, ROW, COI);
	checkerboard(sho, ROW, COI);
	//布置雷
	steRay(shos, ROW, COI);
	checkerboard(shos, ROW, COI);
	//扫雷
	minesweeping(shos,sho, ROW, COI);


}
void tsat()
{
	int ipunt = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请输入选项：》》");
		scanf("%d", &ipunt);
		switch (ipunt)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出成功\n");
			break;
		default:
			printf("输入错误,请重新选择\n");
		}
	} while (ipunt);
}
int main()
{
	tsat();
	return 0;
}
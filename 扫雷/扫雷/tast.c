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
	///�����׵���Ϣ
	char shos[ROWS][COIS] = { 0 };
	//�Ų���׵���Ϣ
	char sho[ROWS][COIS] = { 0 };
	//��ʼ��
	initialize(shos, ROWS, COIS, '0');
	initialize(sho, ROWS, COIS,'*');
	//��ӡ����
	//checkerboard(shos, ROW, COI);
	checkerboard(sho, ROW, COI);
	//������
	steRay(shos, ROW, COI);
	checkerboard(shos, ROW, COI);
	//ɨ��
	minesweeping(shos,sho, ROW, COI);


}
void tsat()
{
	int ipunt = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("������ѡ�����");
		scanf("%d", &ipunt);
		switch (ipunt)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("�������,������ѡ��\n");
		}
	} while (ipunt);
}
int main()
{
	tsat();
	return 0;
}
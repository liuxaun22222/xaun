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
	//��ʼ������
	Initialization(arr,row, age);
	//��ӡ����
	Initiaboard(arr, row, age);
	while(1)
	{
		//���
		gameplayer(arr, row, age);
		//��ӡ����
		Initiaboard(arr, row, age);
		//�ж���Ӯ
		ret = InWin(arr, row, age);
		if (ret != 'c')
		{
			break;
		}
		//�������
		ComputerPlayey(arr, row, age);
		//��ӡ����
		Initiaboard(arr, row, age);
		//�ж���Ӯ
		ret = InWin(arr, row, age);
		if (ret != 'c')
		{
			break;
		}
	     else if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
			printf("ƽ��\n");
	}
}
int main()
{
	int ipout = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mesa();
		printf("�����룺����");
		scanf("%d", &ipout);
		switch (ipout)
		{
		case 1:
			getu();
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:printf("ѡ�����\n");
		}
	} while (ipout);
	return;
}
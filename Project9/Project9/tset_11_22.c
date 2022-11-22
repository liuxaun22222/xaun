#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>/*
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		int i = 0;
		int j = 0;
		int c = 0;
		for (i = 0; i <= a; i++)
		{
			for (j = 0; j < a-i; j++)
			{
				printf("  ");
			}
			for (c = 0; c <= i; c++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < a; i++)
		{
			for (j = 0; j <=  i; j++)
			{
				printf("  ");
			}
			for (c = 0; c < a-i; c++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}*//*
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < a; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf(" ");
			}
			printf("*\n");
			printf("\n");
		}
	}
	return 0;
}*/
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < a; i++)
		{
			for (j=i+1;j<a;j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	return 0;
}
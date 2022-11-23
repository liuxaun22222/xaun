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
			for (j=i+1;j<a;j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	return 0;
}*//*
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a >= 2)
	{
	 a = a << 1;
	}
    printf("%d ", a);
	return 0;
}*//*
int main()
{
	int a = -1;
	int b = a << 1;
	printf("%d ", b);
	return 0;
}*//*
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}*//*
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if(1 == ((a>>i)&1))
			count++;
	}
	printf("%d\n", count);
	return 0;
//}*/
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
////}
//int main()
//{
//
//	unsigned char a = 3;
//	unsigned char b = 127;
//    char c = a + b;
//	printf("%d", c);
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < a; j++)
//			{
//				if (i == j || i + j == a - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < a; j++)
//			{
//				if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < a; j++)
//			{
//				if (j == 0 || i == a-1 || i == j)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 1; i <= a; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ",j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int count = 0;
//	scanf("%d%d", &n,&x);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int c = i;
//		while(c)
//		{
//			if (c % 10 == x)
//			{
//				count++;
//			}
//			c /= 10;
//
//		}
//	}
//	printf("%d", count);
//	return 0;
////}
//int main()
//{
//	int arr[10] = { 0 };
//	int a = 0;
//	for (a = 9; a>=0; a--)
//	{
//		scanf("%d", &arr[a]);
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	while (a)
	{
		int n = 0;
		scanf("%d", &n);
		count += n;
		a--;
	}
	printf("%d", count);
	return 0;
}
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//struct Bokk;
//
//	char 
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct bokk
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = { "真是",20,84.3 };
//	printf("1: %s %d %lf", s.age, s.name, s.score);
//	struct Stu* ps = &s;
//	printf("2: %s %d %lf", (*ps).age, (*ps).name, (*ps).score);
//	printf("3； %s  %d %lf", ps->age, ps->name, ps->score);
//	printf("hello world");
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    for (i = 1; i < 5; i++)
//    {
//        /* 观察每行的空格数量，补全循环条件 */
//        for (j = i; j < 5; j++)
//        {
//            printf(" ");    //输出空格
//        }
//        /* 观察每行*号的数量，补全循环条件 */
//        for (k = 0; k < 2 * i - 1; k++)
//        {
//            printf("*");   //每行输出的*号
//        }
//        printf("\n");     //每次循环换行
//    }
//    return 0;
//}
//
//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码：》");
//	scanf_s("%s", password);
//	printf("请确认密码：(y\n>");
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 1;
//	scanf_s("%d", &b);
//	for (a = 1; a <= b; a++)
//	{
//		sum *= a;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}
//int main()
//{
//	int a = 1;
//	do
//	{
//		printf("%d ", a);
//		a++;
//	} while (a<= 10);
//	return  0;
//}
//
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if(a % 3 == 0)
//		{
//		printf("%d ", a);
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 327;
//	int b = 100;
//	int c = a % b;
//		printf("%d", c);
//		
//	
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(200);//延时函数
//	}
//	return 0;
//}
//int main()
//{
//	char b[1000];
//	int a = 0;
//	for (a = 0; a < 1000; a++)
//	{
//		b[a] = -1 - a;
//	}
//	printf("%d\n", strlen(b));
//	return 0;
//}
//int txes(int x, int y)
//{
//	for (x = 1; x <= 9; x++)
//	{  
//		
//		for (y = 1; y <= 9; y++)
//		{
//			printf("\n");
//			printf("%d*%d=%d ", x, y, x * y);
//		}
//		
//	}
//	
//}
//int main()
//{
//	int a=0;
//	int b = 0;
//    txes(a,b);
//	return 0;
//}
//int main()
//{
//	return 0;
// }
//#include <string.h>
//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//void Suap(int* pa, int* pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//
//int main()
//{
//	int a = 10; 
//	int b = 20;
//	printf("前：%d %d\n", a, b);
//	Suap(&a, &b);
//	printf("后：%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdefg";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[]="abc";
//	char *p= "abc";
//	char *p1= "abc";
//	if (p == p1)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr = { arr1,arr3 };
//	int a = 0;
//	for (a = 0; a < 3; a++)
//	{
//		int b = 0;
//		for (b = 0; b<5; b++)
//		{
//			printf("%d ", *(parr[a] + b));
//		}
//	}
//	return 0;
//}
//int mian()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}
//void print1(int arr[3][5],int x,int y)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < x; a++)
//	{
//		for (b = 0; b < y; b++)
//		{
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < x; a++)
//	{
//		for (b = 0; b < y; b++)
//		{
//			//printf("%d ", (*(*p + a) + b));
//			//printf("%d ",p[a][b]);
//			printf("%d ", (*(*p + a))+b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	
//		int arr[3][5] = { {1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7} };
//		print1(&arr, 3, 5);
//		print2(arr, 3, 5);
//	return 0;
//
//}
//void tset(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	tset(arr);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int(*pa)(int ,int ) = Add;
//	printf("%d ", (*pa)(3, 3));
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	~a;
//	printf("%d ", a);
//		return 0;
////}
//int Auc(int x, int y)
//{
//    return x + y;
//}int Buc(int x, int y)
//{
//    return x - y;
//}int Cuc(int x, int y)
//{
//    return x / y;
//}int Duc(int x, int y)
//{
//    return x * y;
//}
//int main()
//{
//    int (*parr[4])(int, int) = { Auc ,Buc ,Cuc ,Duc };
//    int a = 0;
//    for (a = 0; a < 4; a++)
//    {
//        printf("%d\n", (*parr[a])(2, 3));
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
// int main()
//{
//	int n, m = 0, i = 1;
//	printf("请输入数字上限\n");
//	scanf_s("%d", &n);
//	while (i < n)
//	{
//		if (i % 2 == 1)
//		{
//			m += i;
//		}
//		i ++;
//	}
//	printf("奇数之和：%d\n", m);
//	system("pause");
//	return 0;
//
//}
//void cka()
//{
//	printf("##################################\n");
//	printf("### 1.加  2.减  3.乘  4.除   #####\n");
//	printf("######        0.退出	   #######\n");
//	printf("##################################\n");
//}
//
//int  jia(int x, int y)
//{
//	return x + y;
//}
//int  jian(int x, int y)
//{
//	return x - y;
//}
//int cheng(int x, int y)
//{
//	return x * y;
//}
//int chen(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int ipunt = 0;
//	int a = 0;
//	int b = 0;
//	int(*parr[5]) (int, int) = { 0,jia,jian,cheng,chen };
//	do
//	{
//		cka();
//		printf("请选择：》》");
//		scanf_s("%d",&ipunt);
//		if(ipunt>=1 && ipunt<=4)
//		{
//
//			printf("请输入两个操作数：》");
//			scanf_s("%d%d", &a, &b);
//			int crs = parr[ipunt](a, b);
//			printf("%d\n", crs);
//		}		
//		else if(ipunt==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("'选择错误\n");
//		}
//	} while (ipunt);
//	return 0;
//}
#include <graphics.h>
#include <conio.h>
int main()
{
	initgraph(800, 600);
	fillcircle(400, 300, 100);
	_getch();
	return 0;
}
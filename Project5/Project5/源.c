#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

//int tset(int x, int y)
//{
//	if (x > y)
//		return x;
//	return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int c=tset(a,b);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf_s("%d", &a);
//    if (a %10==0)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int c = 0;
//	if (a > b)
//	{
//		c = a;
//	}
//	else
//	{
//		c = b;
//	}
//	while (1)
//	{
//		if (b % c == 0 && a % c == 0)
//		{
//			printf("最大公约数就是：%d\n", c);
//			break;
//		}
//		c--;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = a % b;
//	int d = b % a;
//	printf("%d %d\n", c, d);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sdk = 5;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = left+(right - left) / 2;
//		if (arr[mid] > sdk)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < sdk)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//
//	}
//	if (left>right)
//	{
//		printf("找不到了？");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	double sum = 0.0;
//	int b = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		sum += b * 1.0 / a;
//		b = -b;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*padd)(int ,int )=Add;
//	int sum = (*padd)(1, 3);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//void geht(int arr[], int sz)
//{
//	int a = 0;
//	int j = 0;
//	for (a = 0; a < sz; a++)
//	{
//		for (j = 0; j < sz - 1 - a; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int map = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = map;
//			}
//		}
//	}
//}

//int mcp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), mcp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int mian()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
////int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (year % 4 == 0)  // 如果year能够被4整除，year可能为闰年
//		{
//			if (year % 100 != 0) // 如果year不能内100整除，则一定是闰年
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)  // 每400年再润一次
//		{
//			printf("%d ", year);
//		}
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int map = a;
//		a = b;
//		b = map;
//	}
//	if (a < c)
//	{
//		int map = a;
//		a = c;
//		c = map;
//	}
//	if (b < c)
//	{
//		int map = b;
//		b = c;
//		c = map;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 9 == 0)
//		{
//			count++;
//		}
//		if (a / 9 == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int a = 0;
//	int sum = 0;
//	for (a = 0; a < 10; a++)
//	{
//		scanf_s("%d", &arr[a]);
//	}
//	sum = arr[0];
//	for (a = 1; a < 10; a++)
//	{
//		if (arr[a] > sum);
//		sum = arr[a];
//	}
//	printf("%d ", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//		printf("%d*%d=%2d ", i, j, i* j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<math.h>
//int tset(int b)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt (b); i++)
//	{
//		if (0 == i % b)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (tset(a) == 1); 
//		count++;
//		printf("%d ", a);
//	}
//	printf("count= %d ", count);
//	return 0;
//}
//int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%x%o", &a, &b);
//	printf("%d ", a+b);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", a % b);
//	return 0;
//}
//int main()
//{
//	float a = 0;
//
//	scanf_s("%f", &a);
//	int b = 0;
//	while (b % 10) 
//	{
//		 b = (int)a;
//	}
//	printf("%d", b);
//	return 0;
//}
//
//#include <assert.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d" ,&a, &b);
//	printf("%d %d", a/b, a%b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while(a-10>0)
//	{
//		a /= 10;
//		a %= 10;
//	}
//	printf("%d",a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int c = (a + b)%7;
//	if (c == 0)
//	{
//		c = 7;
//	}
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int seconds_v = 0;
//	int h, m, s;
//	scanf_s("%d", &seconds_v);
//	h = seconds_v / 3600;
//	m = (seconds_v % 3600) / 60;
//	s = (seconds_v % 3600)%60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d", &a);
//	printf("%d", (2 << (a - 1)));
//	return 0;
//}
//int main()
//{
//	int  killre = 0;
//	for (killre = 'a'; killre <= 'd'; killre++)
//	{
//		if ((killre != 'a') + (killre == 'c') + (killre == 'd') + (killre != 'd') == 3)
//		{
//			printf("killre= %c\n", killre);
//		}
//	 }
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//		return 0;
//}
//#include <string.h>
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int left = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < left-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + left - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	printf("%.3f", 5 / 9 * (a - 32));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	float pr = 3.14;
//	scanf("%d", &a);
//	printf("%.2f", (a * a * pr));
//	return 0;
//}
//int main()
//{
//	float r1 = 0.0;
//	float r2 = 0.0;
//	float r3 = 0.0;
//	scanf_s("%f%f", &r1, &r2);
//	r3 = 1 / (r1 + r2);
//	printf("%.1f", r3);
//	return 0;
//}
//int main()
//{
//	int h = 0;
//	int r = 0;
//	int tmp = 0;
//	scanf_s("%d%d", &h, &r);
//	double pr = 3.14 * h * r * r;
//	tmp = (int)(10000 / pr);
//	if (10000 / pr == tmp)
//	{
//		printf("%d", (int)(10000 / pr));
//	}
//	else
//	{
//		printf("%d", (int)((10000 / pr) + 1));
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//4
//int main()
//{
//	int r = 0;
//	float pi = 3.14;
//	scanf_s("%d", &r);
//	float tmp = 0.0;
//	tmp=((4 / 3.0) * pi * r * r * r);
//	printf("%.2f", tmp);
//	return 0;
//}
//int  main()
//
//{
//	int k, hour, minute;
//	scanf("%d:%d%d", &k, &hour, &minute);
//	k = (k + (minute + hour) / 60) % 24;
//	hour = (minute + hour) % 60;
//	printf("%02d:%02d", k, hour);
//	return 0;
//}
//int main()
//{
//	int a = 0; 
//	int b = 0;
//	scanf("%d", &a);
//	b = a / 12 * 4 + 2;
//	printf("%d", b);
//	return 0;
//}
//
//void tset(int i, int k)
//{
//	int j = i;
//	i = k;
//	k = j;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("%d%d\n", a, b);
//	tset(a,b);
//	printf("%d%d\n", a, b);
//	return 0;
//}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%c\n", a);
	return 0;
}
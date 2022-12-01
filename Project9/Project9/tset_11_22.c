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
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		count += n;
//		a--;
//	}
//	printf("%d", count);
//	return 0;
////}
//int main()
//{
//	int *a;
//	int *pc = &a;
//	*pc = 0;
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &a);
//	int i = 0;
//	int max = 0;
//	int mid = 100;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < mid)
//			mid = arr[i];
//	}
//	printf("%d\n", max - mid);
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &a);
//	int i = 0;
//	for(i=0;i<a;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < a; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
////}
//int my_strlen(char* str)
//{
//	char* a = str;
//	char* b = str;
//	while (*b != '\0')
//	{
//		b++;
//	}
//	return b - a;
//}
//int main()
//{
//	char arr[] = "bid";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
////}
//int main()
//{
//	int arr[] = { 2,3,4,5,7 };
//	int arr1[] = { 1,5,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int arr2[100] = {0};
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr2[i] = arr[i];
//	}
//	for (i = sz; i < 10; i++)
//	{
//		arr2[i] = arr1[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
////}
//int main()
//{
//	int arr[100] = { 0 };
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int a = 0;
//	scanf("%d", &a);
//	int b = 0;
//	scanf("%d", &b);
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < b; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		arr2[i] = arr[i];
//	}
//	int y = a;
//	for (i = 0; i < b; i++)
//	{
//		arr2[y] = arr1[i];
//		y++;
//	}
//	for (i = 0; i < a+b; i++)
//	{
//		int j = 0;
//		for (j = 0; j < a +b; j++)
//		{
//			if (arr2[j] > arr2[j + 1])
//			{
//				int tmp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j+1] = tmp;
//			}
//		}
//	}
//	for (i = 1; i <= a + b; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//
////}
//int main()
//{
//    int arr[50] = { 0 };
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	int count2 = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i<=a ;i++)
//	{
//		if (arr[i] - arr[i + 1] <= 0 )
//		{
//			count++;
//		}
//		else if (arr[i] - arr[i + 1] >= 0)
//		{
//			count2++;
//		}
//	} 
//	if (count == a || count2 == a)
//	{
//		printf("sorted\n");
//	}
//	else
//		printf("unsorted\n");
//	return 0;
////}
//int main()
//{
//	int arr[50] = { 0 };
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &b);
//	for (i = a; i > 0; i--)
//	{
//		if (arr[i-1] >= b)
//		{
//			arr[i] = arr[i-1];
//		}
//		else
//		{
//			arr[i] = b;
//			break;
//		}
//	}
//	for (i = 0; i < a + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
////}
//int main()
//{
//	int arr[50] = { 0 };
//	int arr2[50] = { 0 };
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int b = 0;
//	scanf("%d", &b);
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i] != b)
//		{
//			arr2[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int arr[1000] = { 0 };
//	int arr1[1000] = { 0 };
//	scanf("%d", &a);
//	int i = 0;
//	int t = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		int count = 0;
//		scanf("%d", &arr[i]);
//		for (j = 0; j < i; j++)
//		{
//			if (arr1[j] == arr[i])
//			{
//				count = 1;
//				break;
//			}
//		}
//		if (count == 0)
//		{
//			arr1[t] = arr[i];
//			t++;
//		}
//	}
//	for (i = 0; i < j+1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
////}
//int main()
//{
//	int arr[100] = { 0 };
//	int a = 0;
//	int b = 0; 
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &b);
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i] != b)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
////}
//int main()
//{
//	int arr[100] = { 0 };
//	int a = 0;
//	while(scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		for (i = 2; i <= a; i++)
//		{
//			arr[i] = i;
//		}
//		for (i = 2; i <= a; i++)
//		{
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					arr[i] = 0;
//				}
//			}
//		}
//		int count = 0;
//		for (i = 2; i <= a; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
////}
//int main()
//{
//	double arr[5][7] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf%lf%lf%lf%lf", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//	}
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		double tmp = 0;
//		for (j = 0; j <= 5; j++)
//		{
//			tmp += arr[i][j];
//		}
//		arr[i][5] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= 5; j++)
//		{
//			printf("%.1lf ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
////}
//int main()
//{
//	int arr[5][5] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//
//	}
//	int x = 0;
//	scanf("%d", &x);
//	int y = 0;
//	scanf("%d", &y);
//	
//	printf("%d ", arr[x - 1][y - 1]);
//	return 0;
////}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] >= max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] == max)
//			{
//				printf("%d %d", i + 1, j + 1);
//				break;
//			}
//		}
//	}
//	return 0;
////}
//#include <assert.h>
//void my_strcpy(char* str, char* stre)
//{
//	assert(str != NULL);
//	assert(stre != NULL);
//	while (*str++ = *stre++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";;
//	my_strcpy(arr1, arr2);
//	printf("%s\n",  arr1);;
//	return 0;
////}
//int main()
//{
//	int numms[] = { 0 };
//	int target = 0;
//	scanf("%d", &target);
//	return 0;
////}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int arr1[10][10] = { 0 };
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//			if (arr[i][j] != arr1[i][j])
//			{
//				printf("no\n");
//			}
//		}
//	}
//	printf("yes\n");
//	return 0;
////}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
////}
//int main()
//{
//	int arr[20][20] = { 0 };
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 20; j++)
//		{
//			arr[i][j-1] = j;
//		}
//	}
//	for (i = 0; i <a; i++)
//	{
//		int j = 0;
//		for (j = 0; j <20; j++)
//		{
//			if (arr[0][j] <= a)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			if(arr[1][j] )
//		}
//		printf("\n");
//	}
//	return 0;
////}
//void mp(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= sz -1; j++)
//		{
//			if (arr[j-1] > arr[j])
//			{
//				int tmp = arr[j-1];
//				arr[j-1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	mp(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
////}
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int laft = 0;
//	int lafth = sz - 1;
//	while (laft < lafth)
//	{
//		int tmp = arr[laft];
//		arr[laft] = arr[lafth];
//		arr[lafth] = tmp;
//		laft++;
//		lafth--;
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
////}
//void Exchange(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Exchange(arr1, arr2, sz);
//	int i = 0;
//	printf("arr1=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2 = ");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
////}
//int main()
//{
//	char* p = "abcdhf";
//	*p = 'q';
//	printf("%s\n", p);
//	return 0;
////}
//int main()
//{
//	unsigned char a = 256;
//	printf("%d ", a);
//	return 0;
////}
//int erar(int m, int n)
//{
//	int i = m^n;
//	int count = 0;
//	while (i)
//	{
//		i = i & (i - 1);
//		count++;;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = erar(m, n);
//	printf("不同的有:>%d\n", ret);
//	return 0;
////}
//void print(int a)
//{
//	int i = 0;
//	for (i =31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i)& 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) &1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
////}
//int Boh(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = Boh(a);
//	printf("%d\n", ret);
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a,&n);
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
////}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000000; i++)
//	{
//		int n = i;
//		int count = 1;
//		int sum = 0;
//		while (n/10)
//		{
//			count++;
//			n = n / 10;
//		}
//		int tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}
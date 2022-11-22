#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}#include <stdio.h>
//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
////	return 0;
////}
//int main()
//{
//	int ret = 2000;
//	while (ret)
//	{
//		ret--;
//		printf("要好好努力\n");
//	}
//	if (ret == 0)
//	{
//		printf("好offer\n");
//	}
//	return 0;
////}
//int sum(int i)
//{
//	int a = 0;
//	int sum = 0;
//	for (a = 0; a < 100; a++)
//	{
//		if (i << 1 == 1)
//		{
//			sum = i;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = sum(a);
//	printf("%d\n", b);
//	return 0;
////}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	printf("%d ", MALE);
//	printf("%d ", FEMALE);
//	printf("%d ", SECRET);
////}
//int main()
//{
//				char arr[] = "abc";
//				char arr1[] = { 'a', 'b', 'c' };
//				printf("%d\n", strlen(arr));
//				printf("%d\n", strlen(arr1));
//				return 0;
//////}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("是奇数\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	int b = 0;
//	for (b = 0; b < 100; b++)
//	{
//		if (b % 2 == 1)
//		{
//			printf("%d ", b);
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
	/*char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
			putchar(ch);
	//}*/
	//int i = 0;
	//int j = 0;
	////如果省略掉初始化部分，这里打印多少个hehe?
	//for (; i < 10; i++)
	//{
	//	for (j=0; j < 10; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}#include <stdio.h>
	/*int main()
	{
		int a = 0;
		int b = 0;
		int c = 0;
		scanf("%d", &a);
		for (b = 0; b < 10; b++)
		{
			if ((a << 1) % 2 == 1)
			{
				c++;
			}
			a++;
		}
		printf("%d\n", c);
		return 0;
	}*/
//
//
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	char ch;
//	scanf("%lf%c%lf", &a, &ch, &b);
//	if (ch == '/' || ch == '*' || ch == '+' || ch == '-')
//	{
//		if (ch == '+' && b !=0.0)
//		{
//			c = a + b;
//			printf("%.4lf+%.4lf =%.4lf",a,b,c );
//		}
//		else if (ch == '*' && b != 0.0)
//		{
//			c = a * b;
//			printf("%.4lf*%.4lf =%.4lf", a, b, c);
//		}
//		else if (ch == '-' && b != 0.0)
//		{
//			c = a - b;
//			printf("%.4lf-%.4lf =%.4lf", a, b, c);
//		}
//		else if (ch == '/' && b != 0.0)
//		{
//			c = a / b;
//			printf("%.4lf/%.4lf =%.4lf", a, b, c);
//		}
//		else if (b == 0.0)
//		{
//			printf("Wrong!Division by zero!\n");
//		}
//
//	}
//	else
//	{
//		printf("Invalid operation!");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] < sz)
//		{
//			int sum = arr[i];
//			arr[i] = sz;
//			sz = sum;
//	  }
//		printf("%d ", arr[i]);
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10] = { 3,2,3,4,11,6,7,20,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (j = 0; 
//		j < 10 - 1; 
//		j++)
//	{
//		if (arr[j] > arr[j + 1])
//		{
//			int sum = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = sum;
//		}
//		printf("%d ", arr[j]);
//	}
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (a = 1; a <=n; a++)
//	{
//		ret = ret * a;
//	}
//	printf("%d ", ret);
//	return 0;
////}
//int main()
//{
//	char arr1[] = "dgsdgdsstg!!!1";
//	char arr2[] = "$$$$$$$$$$$$$$";
//	int lar = 0;
//	int laf = strlen(arr1) - 1;
//	while (lar <= laf)
//	{
//		arr2[lar] = arr1[lar];
//		arr2[laf] = arr1[laf];
//		printf("%s\n", arr2);
//		lar++;
//		laf--;
//	}
//	return 0;
//对于有行有列的图形采用双循环，i控制行，j控制列，对于这种金字塔，倒三角，我们可以先利用循环把空格打印出来，然后在相应的位置放上*.
//#include<stdio.h>
//int main()
//{
//	int i, j, n;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n; i++) {  //行
//			for (int j = 0; j < n - i - 1; j++) {//列，观察列与行的关系
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++) {
//				printf("* ");
//			}
//			printf("\n");
//		}
////	}
////}
//
//int main()
//
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		int d = a;
//		a = b;
//		b = d;
//	}
//	else if (b > c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	else if (a > c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
////}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//
#include <stdlib.h>
#include <time.h>
//void mesc()
//{
//	printf("####################\n");
//	printf("###   1.猜数字   ###\n");
//	printf("###   0.退出     ###\n");
//	printf("####################\n");
//}
//void gect()
//{
//	int ret = 0;
//	int i = 0;
//	ret = (rand() % 100) + 1; 
//	while(1)
//	{
//		printf("请输入数字:>>");
//		scanf("%d", &i);
//	if (ret < i)
//	{
//		printf("猜大了\n");
//	}
//	 else if (ret > i)
//	{
//		printf("猜小了\n");
//	}
//	else
//	{
//		printf("猜对了\n");
//		break;
//	}
//}
//}
//int main()
//{
//	int count = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		mesc();
//		printf("请选择:>>");
//		scanf("%d", &count);
//		switch (count)
//		{
//		case 1:
//			gect();//猜数字游戏
//			break;
//		case 0:
//			printf("退出成功\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;1
//				1
//
//		}
//	} while (count);
//	return 0

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int sum1 = 0;
//	for (i = 1; i <= a; i++)
//	{
//		sum1 = i + sum1;
//		sum += sum1;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &a);
//	while(a)
//	{
//		int c = a % 10;
//		sum += c;
//		a = a / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (1)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//			n = n * 3 + 1;
//			if (n == 1)
//			{
//				break;
//			}
//		}
//		if (n % 2 == 0)
//		{
//			count++;
//			n = n / 2;
//			if (n == 1)
//			{
//				break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		if (i % 9 == 0 || i / 9 == 0)
//		{
//			count++;
//		}
//
//	}
//	printf("%d ", count);
////	return 0;
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int c = i;
//		while (c > 0)
//		{
//			if (c % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			else
//			{
//				c /= 10;
//			}
//	}
//	}
//	printf("%d ", count);
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int count = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if ((a + b + c) / 3 < 60)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
////}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		int a = 0;
//		for (a = m; a <= n; a++)
//		{
//			int b = a/100;
//			int c = a % 100/10;
//			int d = a % 10;
//				if (b * b * b + c * c * c + d * d * d == a)
//				{
//					printf("%d ", a);
//			}
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int a = 0;
//	char b[20] = "0";
//	for (a = 0; a < i; i++)
//	{
//		scanf("%d", b[i]);
//	}
//
//	return 0;
//}
//其实这就是个字符串的冒泡排序，如果字符串A+B>B+A那么认为A>B
//以此为准则，采用冒泡排序的方法将字符串按大小排序，然后输出就可以了 #include<stdio.h>
#include<stdlib.h>/*
#include<string.h>
int main()
{
	int i, j;
	int num = 0;
	char data[100][5] = { '\0' };
	char tempa[7] = { '\0' }, tempb[7] = { '\0' }, temp[5] = { '\0' };
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%s", data[i]);
	}
	strcpy(temp, data[0]);
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			strcpy(tempa, data[i]);
			strcat(tempa, data[j]);
			strcpy(tempb, data[j]);
			strcat(tempb, data[i]);
			if (strcmp(tempa, tempb) < 0)
			{
				strcpy(temp, data[j]);
				strcpy(data[j], data[i]);
				strcpy(data[i], temp);
			}
		}
		printf("%s", data[i]);
	}
	system("pause");
	return 0;
//}*/
//int main()
//{
//	int x = 0;
//	int count = 0;
//	scanf("%d", &x);//朋友家的位置x
//	//小明一次性可以走1，2，3，4，5，步；
//	while (x)
//	{
//		if (x > 5)
//		{
//			x -= 5;
//			count++;
//		}
//		else
//		{
//			count++;
//			if (x <= 5)
//			{
//				break;
//			}
//		}
//	}
//	printf("%d ", count);
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int a = 0;
//		sum = 0;
//		for (a = 10; a <= 10000; a *= 10)
//		{
//			sum += (i % a) * (i / a);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}#include<stdio.h>
//#define MAX 81
//
//int main(void)
//{
//	char name[MAX];
//	char* ptr; //指向char的指针
//
//	printf("Please input your name.\n");
//	ptr = gets(name); //使用一个地址吧字符串赋值给name
//	//gets()函数使用return关键字返回字符串的地址
//	printf("name, %s\n", name);
//	printf("ptr, %s\n", ptr);
//
//	return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//static int largestRectangleArea(int* heights, int heightsSize)
//{
//	int* indexes = malloc(heightsSize * sizeof(int));
//	int* left = malloc(heightsSize * sizeof(int));
//	int* right = malloc(heightsSize * sizeof(int));
//	int i, pos = 0;
//	for (i = 0; i < heightsSize; i++)
//	{
//		while (pos > 0 && heights[indexes[pos - 1]] >= heights[i])
//		{
//			pos--;
//		}
//		left[i] = pos == 0 ? -1 : indexes[pos - 1];
//		indexes[pos++] = i;
//	}
//	pos = 0;
//	for (i = heightsSize - 1; i >= 0; i--)
//	{
//		while (pos > 0 && heights[indexes[pos - 1]] >= heights[i])
//		{
//			pos--;
//		}
//		right[i] = pos == 0 ? heightsSize : indexes[pos - 1];
//		indexes[pos++] = i;
//	}
//	int max_area = 0;
//	for (i = 0; i < heightsSize; i++)
//	{
//		int area = heights[i] * (right[i] - left[i] - 1);
//		max_area = area > max_area ? area : max_area;
// 	}
//	return max_area;
//}
//int main(void)
//{
//	int nums[] = { 2, 1, 5, 6, 2, 3 };
//	int count = sizeof(nums) / sizeof(*nums);
//	printf("%d\n", largestRectangleArea(nums, count));
//	return 0;
////}
//my_memset(char *dst, char *value, unsigned int count)
//{
//	;       char* start = dst;
//	;
//	;       while (count--)
//		;           *dst++ = value;
//	;       return(start);
//}
//	;       
//#include <string.h>
//int main()
//{
//	char arr[10] = "xaun";
//	char a = '^';
//	printf("%s\n", my_memset(&arr, &a, 2));
//	return 0;
////}
//void sret(int *x,int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	sret(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
////}
//#include <math.h>
//int is_ret(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (sqrt(n)%j == 0)
//			return 0;
//	}
//	if(j == n)
//	    return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_ret(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
////}
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == k)
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到啦\n");
//	}
//	else
//	{
//		printf("找到了，下标是： %d \n", ret);
//	}
//	return 0;
////}
//int main()
//{
//	int j, s, t;
//	for (j = 2; j < 6; j++, j++)
//	{
//		s = 1;
//		for (t = j; t < 6; t++)
//		{
//			s += t;
//		}
//	}
//	printf("%d ", s);
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int c = 0;
//	while (i)
//	{
//		int s = i % 10;//%10得于数 //     /10得
//	   i = i / 10;
//	   printf("%d", s);
//	} 
//	return 0;
////}
//int main()
//{
//	int arr[7] = { 0 };
//	while ((scanf("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) !=EOF))
//	{
//		int max = 100;
//		int mid = 0;
//		int i = 0;
//		for (i = 0; i < 7; i++)
//		{
//			if (arr[i] > mid)
//				mid = arr[i];//最大的数
//			if (arr[i] < max)
//				max = arr[i];//最小的数
//		}
//		double sum = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6]) - mid - max;
//		printf("%.2lf", sum/5.0);
//	}
//	return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////static inline int min(int a, int b);
////{
////	return a < b ? a : b;
////}
//int minPathSum(int** grid, int gridRowSize, int gridColSize)
//{
//	int i, j;
//	int** dp = malloc(gridRowSize * sizeof(int*));
//	for (i = 0; i < gridRowSize; i++)
//	{
//		dp[i] = malloc(gridColSize * sizeof(int));
//	}
//	dp[0][0] = grid[0][0];
//	int sum = dp[0][0];
//	for (i = 1; i < gridRowSize; i++)
//	{
//		sum += grid[i][0];
//		dp[i][0] = sum;
//	}
//	sum = dp[0][0];
//	for (i = 1; i < gridColSize; i++)
//	{
//		sum += grid[0][i];
//		dp[0][i] = sum;
//	}
//	for (i = 1; i < gridRowSize; i++)
//	{
//		for (j = 1; j < gridColSize; j++)
//		{
//			;
//		}
//	}
//	return dp[gridRowSize - 1][gridColSize - 1];
//}
//int main(int argc, char** argv)
//{
//	int i, j;
//	int row = argc - 1;
//	int col = strlen(argv[1]);
//	int** grid = malloc(row * sizeof(int*));
//	for (i = 0; i < row; i++)
//	{
//		grid[i] = malloc(col * sizeof(int));
//		for (j = 0; j < col; j++)
//		{
//			grid[i][j] = argv[i + 1][j] - '0';
//			printf("%d ", grid[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d\n", minPathSum(grid, row, col));
//	return 0;
////}
//void print(int i)
//{
//	if (i > 9)
//		print(i / 10);
//	printf("%d ", i%10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
////}
//void sa(int **a[])
//{
//	printf("%d ", *(a[0]+1));
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	sa(&arr);
//	return 0;
////}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abfd";
//	int lrn = my_strlen(arr);
//	printf("%d ", lrn);
//	return 0;
////}
//int ett = 0;
//int fid(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return ett =  fid(n - 1)+ fid(n - 2);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fid(i);
//	printf("%d", ret);
//	return 0;
////}
//int my_sizeof(char* a)
//{
//	if (*a == '\0')
//		return 1;
//	else
//		return 1 + my_sizeof(a + 1);
//}
//int main()
//{
//	char arr[] = "sadf";
//	int ret = my_sizeof(arr);
//	printf("%d \n", ret);
//	printf("%d  ", sizeof(arr));
//	return 0;
//////}
//int yeary(int year)
//{
//	if ((year % 400 == 0 && year % 100 != 0) || year % 4 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = yeary(year);
//	if (1 == ret)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//
//
//void mal(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);//交换之前
//	mal(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
////}
//void Mlt(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int sum = j * i;
//			printf("%d*%d=%-2d ", j, i, sum);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Mlt(i);
//	return 0;
////}
//int Binary(int arr[], int n, int sz)
//{
//	int laft = 0;
//	int right = sz - 1;
//	while (laft <= right)
//	{
//		int tmp = (laft + right) / 2;
//		if (arr[tmp] < n)
//		{
//			laft = tmp +1;
//		}
//		else if (arr[tmp] > n)
//		{
//			right = tmp -1;
//		}
//		else if (arr[tmp] == n)
//		{
//			return tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binary(arr, n, sz);
//	if (-1 == ret)
//	{
//		printf("找不到该下标\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int a = 2;
//	int ret = Fun(a);
//	printf("%d ", ret);
//	return 0;
////}
//void aum(int n)
//{
//	if (n > 9)
//	   aum(n / 10);
//	printf("%d ", n%10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//      aum(i);
//	return 0;
////}
//int Bid(int n)
//{
//	if (n > 5)
//		Bid(n / 6);
//	printf("%d", n % 6);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//    Bid(i);
//	return 0;
////}#include<stdio.h>
//int main() {
//	int day = 0;
//	int sum = 0;
//	scanf("%d", &day);
//	int count = 0;
//	for (int i = 1; i <= day; i++)
//	{
//		for (int j = 0; j < i; j++) {
//			sum += i;
//			count++;
//			if (count == day) {
//				goto here;
//			}
//		}
//
//	}
//here: printf("%d", sum);
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int su = 0;
//	int t = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int sum = i;
//		while (sum > 9)
//		{
//			if (sum >= 10) {
//				su = sum % 10;
//				sum = sum / 10;
//			}
//			if (sum >= 100) {
//				su = sum % 100;
//				sum = sum / 100;
//			}
//			if (sum >= 1000) {
//				su = sum % 1000;
//				sum = sum / 1000;
//			}
//			if (sum >= 10000) {
//				su = sum % 10000;
//				sum = sum / 10000;
//			}
//			if (sum >= 100000) {
//				su = sum % 100000;
//				sum = sum / 100000;
//			}
//		}
//		if (sum == su || i<10)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int t = 0, num = i;
//		while (num > 0)
//		{
//			t = t * 10 + num % 10;
//			num = num / 10;
//		}
//		if (t == i)
//			printf("%d\n", i);
//	}
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < a; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		for (i = a; i >0; i--)
//		{
//			int j = 0;
//			for (j = i; j>0; j--)
//			{
//				printf("* ");
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
//		for (i=0;i<a;i++)
//		{
//			int j = 0;
//			for (j = 0; j < a-i -1; j++)
//			{
//				printf("  ");
//			}
//			int c = 0;
//			for (c = 0; c <= i; c++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = n; i > 0; i--)
//		{
//			int j = 0;
//			for (j = n-i; j > 0 ; j--)
//			{
//				printf(" ");
//			}
//			int c = 0;
//			for (c = i; c>0; c--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		int a = 0;
//		for (a = 0; a < i+1; a++)
//		{
//			int j = 0;
//			for (j = 0; j < i-a; j++)
//			{
//				printf(" ");
//			}
//			int c = 0;
//			for (c = 0; c <= a; c++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//		for (int y = 0; y < i; y++)
//		{
//			for (int j = 0; j <= y; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < i - y; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = 0;
//	int sum = 1;
//	for (ret = 2; ret <= i; ret++)
//	{
//		sum *= ret;
//	}
//	printf("%d ", sum);
//	return 0;
////}
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int my_strlen2(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int ret = my_strlen(arr);
//	int re = my_strlen2(arr);
//	printf("%d\n", ret);
//	printf("%d\n", re);
//	return 0;
////}
//reverse_string(char* string)
//{
//	if ('\0' == *string)
//		return 1;
//	else
//		reverse_string(string + 1);
//	printf("%s", string);
//}
//int main()
//{
//	char arr[] = "dsgs";
//	reverse_string(arr);
//	return 0;
////}
//int main()
//{
//	int arr[5][5] = { 1,2,3,4,5,6,3,2 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//////	return 0;c
//void minp(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 8,9,6,10,7,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	minp(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
///}
//int main()
//{
//	double a = 0;
//	double sum = 0;
//	int c = 0;
//	scanf("%d%d")
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int j = 0;
//		int i = 0;
//		for (i = 0; i <= a; i++)
//		{
//			for (j = 0; j <= a - i; j++)
//			{
//				printf("* ");
//
//			}
//			printf("\n");
//		}
//		for (i = 1; i <= a; i++)
//		{
//			for (j = 1; j <= i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		int i = 0;
		int j = 0;
		int c = 0;
		for (i = 0;i < a; i++)
		{
			for (j = 0; j < a- i; j++)
			{
				printf(" ");
			}
			for (c = 1; c < j; c++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//int main()
//{
//    int arr[30][30] = { 1 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n; i++)
//    {
//        arr[i][0] = 1;
//        for (j = 1; j <= i; j++)
//        {
//            arr[i][j] = arr[i-1][j] + arr[i-1][j - 1];
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d     ", arr[i][j]);;
//        }
//        printf("\n");
//    }
//    return 0;
////}
//int main()
//{
//	int z = 0;
//	int y = 0;
//	int x = 0;
//	z = (x -= x - 5), (x = y, y + 3);
//	printf("z = %d,x = %d,y=%d\n", z, x, y);
//	return 0;
////}
//int my_strlen(char* len)
//{
//	int count = 0;
//	while (*len++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[100] = "\0";
//	scanf("%s", arr);
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
////}
//char* my_strcpy(char* coy1,const char* coy2, int k)
//{
//	char* str = coy1;
//	int count = 0;
//	while (*coy2 != '\0')
//	{
//		if (count >= k)
//		{
//			*coy1 = *coy2;
//			coy1++;
//		}
//		coy2++;
//		count++;
//	}
//	return str;
//}
//int main()
//{
//	char arr1[30] = { 0 };
//	char arr2[30] = { 0 };
//	int k = 0;
//	scanf("%s", arr2);
//	scanf("%d", &k);
//	my_strcpy(arr1, arr2, k);
//	printf("%s\n", arr1);
//	return 0;
////}
//void swaf(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swaf(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
////}
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[6] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print(arr, sz);
//	return 0;
////}
//int cal(int* array, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		count += *(array + i);
//	}
//	return count;
//}
//int main()
//{
//	int arr[30] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int ret = cal(arr, n);
//	printf("%d\n", ret);
//	return 0;
////}
//void sort(int* array, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n-i-1; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				int tmp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for(i=0;i<a;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, a);
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
////}
//struct str
//{
//	char a;
//	int b;
//	char c;
//};
//struct str1
//{
//	char a;
//	char c;
//	int b;
//};
//int main()
//{
//	struct str s = { 0 };
//	struct str1 s1 = { 0 };
//	printf("%zd\n", sizeof(s));
//	printf("%zd\n", sizeof(s1));
//	return 0;
////}
//int main()
//{
//	char arr[100] = "";
//	scanf("%s", arr);
//	int ret = strlen(arr);
//	int i = 0;
//	for (i = 1; i <= ret; i++)
//	{
//		printf("%c", arr[i - 1]);
//		if (i>=2 && i % 3 == 0)
//		{
//			printf(",");
//		}
//	}
//	return 0;
////}
//void* my_memmove(void* deat, void* str, size_t count)
//{ 
//	void* ret = deat;
//	if(deat<str)
//	{
//		while (count--)
//		{
//			*(char*)deat = *(char*)str;
//			++(char*)deat;
//			++(char*)str;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)deat + count) = *((char*)str + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_memmove(arr+3, arr+1, 20);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	int tmp = a;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			arr[0][j] = j + 1;
//			if (arr[i][a-1] == arr[i][j])
//			{
//			arr[i + 1][j] = tmp + 1;
//			tmp = arr[i + 1][j];
//			}
//			if (arr[i][j] == arr[i][j])
//			{
//				tmp = tmp + a - 1;
//				arr[i][j] = tmp;
//				tmp--;
//			}
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
////}
//int main()
//{
//	int arr[20][20] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int up = 0;//ÉÏ
//	int down = n - 1;//ÏÂ
//	int left = 0;//×ó
//	int right = n - 1;//ÓÒ
//	int x = 1; //Êý
//	int count = 0;
//	int i = 0;
//	while (x <= n * n)
//	{
//		for (i = left; i <= right; i++)
//		{
//			arr[up][i] = x++;
//		}
//		up++;
//		for (i = up; i <= down; i++)
//		{
//			arr[i][right] = x++;
//		}
//		right--;
//		for (i = right; i >=left; i--)
//		{
//			arr[down][i] = x++;
//		}
//		down--;
//		for (i = down; i >= up; i--)
//		{
//			arr[i][left] = x++;
//		}
//		left++;
//		/*for (i = left; i <= right; i++)
//		{
//			arr[up][i] = x++;
//		}*/
//
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
////}
//int main()
//{
//    int* p = (int*)malloc(40);
//	int i = 0;
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	int* p1 = realloc(p, 40);
//	if(p1 != NULL)
//	{
//		for (i = 10; i < 20; i++)
//		{
//			*(p1 + i) = i;
//		}
//		for (i = 10; i < 20; i++)
//		{
//			printf("%d ", *(p1 + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
////}
//int max3(int a, int b, int c)
//{
//	int tmp = a > b ? a : b;
//	int com = b > c ? b : c;
//	return tmp > com ? tmp : com;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	/*max3(a + b, b, c);
//	max3(a, b + c, c);
//	max3(a, b, b + c);*/
//	double m = (double)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2lf", m);
//	return 0;
////}
//int sum(int a, int b)
//{
//	int i = 0;
//	int count = 0;
//	int t = 0;
//	int su = 0;
//	for (i = a; i <= b; i++)
//	{ 
//		t = i; su = 0;
//		while (t)
//		{
//			su += t % 10;
//			t /= 10;
//		}
//		if (su%5 == 0)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = sum(a, b);
//	printf("%d\n", ret);
//	return 0;
////}
//int sum(int n)
//{
//	while (1)
//	{
//		n = n % 10 + n / 10;
//		if (n >= 10)
//			sum(n);
//		else 
//			return n;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n",sum(a));
//	return 0;
////}
//int number(int a, int b)
//{
//	int i = 0;
//	int count = 0;
//	int cum = 0;
//	int cu = 0;
//	for (i = a; i <= b; i++)
//	{
//		cum = i; cu = 0;
//		while(cum)
//		{
//			if (cum % 10 == 2)
//				count++;
//			cum /= 10;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n",number(a, b));
//	return 0;
////}
//double SMS(int n)
//{
//	int i = 0;
//	int arr[100] = {0};
//	double sum = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] <= 60)
//		{
//			sum += 0.1;
//		}
//		else if (arr[i] > 60)
//		{
//			sum += 0.2;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double ret = SMS(n);
//	printf("%.1lf\n",ret);
//	return 0;
////}
//int sum(int l, int r)
//{
//	int sum = 0;
//	int i = 0;
//	int count = 0;
//	for (i = l; i <= r; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (i % j == 0)
//				count++;
//		}
//		if (count == 2)
//			sum += i;
//		count = 0;
//	}
//	return sum;
//}
//int main()
//{
//	int l = 0;
//	int r = 0;
//	scanf("%d%d", &l, &r);
//	int ret = sum(l, r);
//	printf("%d\n", ret);
//	return 0;
//}
struct s
{
	int n;
	int* arr;
};
int main()
{
	struct s* p = (struct s*)malloc(sizeof(struct s));
	p->arr = (int*)malloc(10 * sizeof(int));
	p->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",p->arr[i]);
	}
	printf("\n%d", p->n);
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}
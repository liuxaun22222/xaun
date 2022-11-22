#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b,& c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int	c = 30;
//	int* arr1[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr1[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int x, i, max = 0, min = 0;
//	double sum = 0, ave = 0;
//	int a[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//		sum += a[i];
//		if (max < a[i])
//			min = a[i];
//		if (min > a[i])
//			max = a[i];
//	}
//	ave = sum / 10;
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	for (i = 5; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("平均成绩%f ,最高分%d ,最低分%d", ave, max, min);
//	return 0;
//}
//#define n (int )5
//int main()
//{
//	int a[n] = { 1,5,3,98,8 };
//	int tmp;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1]) 
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//void init(int arr[], int sz)
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
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int amp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = amp;
//	}
//	return 0;
//}
//int count_bit_one(int a)
//{
//	int count = 0;
//	while(a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d" ,& a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}
//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a =0;
//	print(a);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0');
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefgt";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//
//int digitsum(unsigned int unm)
//{
//    if (unm > 9)
//    {
//        return digitsum(unm / 10) + unm % 10;
//    }
//    else
//    {
//        return unm;
//    }
//}
//int main()
//{
//    unsigned int unm = 0;
//    scanf("%d", &unm);
//    int   ret = digitsum( unm);
//    printf("ret=%d\n", ret);
//    return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("sex: %s\n", tmp.sex);
//	printf("tele: %s\n", tmp.tele);
//}
//void print2(stu* tmp)
//{
//	printf("name: %s\n", tmp->name);
//	printf("name: %d\n", tmp->age);
//	printf("name: %s\n", tmp->sex);
//	printf("name: %s\n", tmp->tele);
//}
//int main()
//{
//	stu s = { "小米",14,"10909384722","男" };
//	print1(s);
//	print2(&s);
//	return 0;
//}
#include <stdlib.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);
	printf("%d\n", c);
	system("pause");
	return 0;
}
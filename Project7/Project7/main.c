#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//void* my_memmove(void* dest, const void* srt, size_t conut)
//{
//	void* src = dest;
//	if (dest < srt)
//	{
//		while (conut--)
//		{
//			*(char*)dest = *(char*)srt;
//			++(char*)dest;
//			++(char*)srt;
//		}
//	}
//	else
//	{
//		while (conut--)
//		{
//			*((char*)dest + conut) = *((char*)srt + conut);
//		}
//	}
//	return src;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	return 0;
//}
//int main()
//{/*
//	int arr[] = { 1,2,3,4,5 };
//	int arr1[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr, arr1, 12);
//	printf("%d\n", ret);*/
//	char arr[10] = {' '};
//	memset(arr, '&', 10);
//	return 0;
////}
//struct s
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct s i = { 'c',100,3.14,"hello world" };
//	printf("%c %d %lf %s\n", i.c, i.a, i.d, i.arr);
//	return 0;
//}
//#pragma pack(2)
//struct s3
//{
//	double d;
//	char a;  
//	int c;
//};
//struct s4
//{
//	char a;
//	struct s3 s2;
//	double d;
//};
//#pragma pack()
//#include <stddef.h>
//struct s2
//{
//	double  a;
//	int b;
//	double s;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct s2,a));
//	printf("%d\n", offsetof(struct s2,b));
//	printf("%d\n", offsetof(struct s2,s));
//	return 0;
//}
//struct s
//{
//	char a;
//	int b;
//	double c;
//};
//void Iost(struct s *ps)
//{
//	ps->a = 'w';
//	ps->b = 100;
//	ps->c = 3.14;
//}
//void print1(struct s* ps)
//{
//	printf("%c %d %lf\n", ps->a, ps->b, ps->c);
//}
//void print2(struct s tmp)
//{
//	printf("%c %d %lf\n", tmp.a, tmp.b, tmp.c);
//}
//int main()
//{
//	struct s s1 = { 0 };
//	Iost(&s1);
//	print1(&s1);
//	print2(s1);
//	return 0;
//}
//int main() {
//    int a[3][3] = { {1, 2}, {3, 4}, {5, 6} }, i, j, s = 0;
//    for (i = 1; i < 3; i++)
//        for (j = 0; j <= i; j++) 
//            s += a[i][j];
//    printf("%d\n", s++);
//}
//int a = 1;
//void foo() {
//    ++a;
//    printf("%d", a);
//}
//int main()
//{
//    foo();
//    return 0;
//}
//void func(char str_arg[100]) {
//    printf("%d ", sizeof(str_arg));
//
//}
//int main(int argc, char* argv[]) {
//    char str[] = "Hello";
//    char* p = str;
//    printf("%d ",sizeof(str));
//    printf("%d ", sizeof(p));
//
//    func("test");
//    return 0;
//}
//int main() {
	/*int x, a[10] = { 0, 1, 2 }, * p = a;
	x = *(p + 2);*/
//    int main() {
//        char* p = "abcdefgh", * r;
//        long* q;
//        q = (long*)p;
//        q++;
//        r = (char*)q;
//        printf("%s\n", r);
//	return 0;
//}
//#define f(x) x*x
//int main() {
//	int a = 5, b = 2, c;
//	c = f(a) / f(b);
//	printf("%d", c);
//}
//#define  S(x) 4*x*x+1
//int main() {
//	int i = 6, j = 8;
//	printf("%d\n", S(i + j));
//	return 0;
//}
//#include <stdio.h>
//#define N 4
//
//void fun(int a[][N], int* p) {
//    int i;
//    for (i = 0; i < N; i++) {
//        if (i < 3)
//            p[i] += a[i][i] - a[i][N - i - 2];
//        else
//            p[i] += a[i][i] - a[i][N - i];
//    }
//}
//
//main() {
//    int x[N][N] = { {3, 6, 2, 0}, {2, 8, 7, 9}, {5, 1, 7, 3}, {9, 5, 3, 7} },
//        y[N] = { 3, 5, 8, 6 }, i;
//    fun(x, y);
//    for (i = 0; i < N; i++)
//        printf("%d ", y[i]);
//    printf("\n");
////}
//#include <stdio.h>
//int main()
//{
//	int y1, j1, f1, y2, j2, f2;
//	int y, j, f;
//	int shiftj = 0;
//	int shifty = 0;
//	float ss;
//	scanf_s("%d %d %d", &y1, &j1, &f1);
//	scanf_s("%d %d %d", &y2, &j2, &f2);
//	f = f1 + f2;
//	if (f >= 10)
//	{
//		f = f - 10;
//		shiftj = 1;
//	}
//	j = j1 + j2 + shiftj;
//
//	if(j==10)
//
//	{
//		shifty = 1;
//	}
//	y = y1 + y2 + shifty;
//	ss = y + j / 10.0 + f / 100.0;
//	printf("%.2f\n", ss);
//	return 0;
////}
//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct s w = { 0 };
//	w.a = 10;
//	w.b = 20;
//	w.c = 3;
//	w.d = 4;
//	return 0;
//}
//enum color
//{
//	REO=33,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum coltr c;
//	printf("%d %d %d\n", REO, GREEN, BLUE);
//	return 0;
////}
//union un
//{
//	char a;
//	int b;
//};
//int main()
//{
//	union un s;
//	printf("%d\n", sizeof(s));
//	printf("%p\n", &(s.a));
//	printf("%p\n", &(s.b));
//	printf("%p\n", &s);
//
//	return 0;
////}
//int cold()
//{/*
//	int a = 1;
//	return *(char*)&a;*/
//	union un
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.a;
//}
//int main()
//{
//	int a = 1;
//	int ret = cold();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		free(p);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d,%d\n", a++, a--);
//	return 0;
//}
//int main()
//{
//	int *p = malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
////}
//int fun(int x)
//{
//    int countx = 0;
//    while (x)
//    {
//        countx++;
//        x = x & (x - 1);
//    }
//    return countx;
//}
// int main()
//{
//     int a = 500;
//     int b = fun(a);
//     printf("%d\n", b);
//     return 0;
// }
//struct S
//{
//	int n ;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	int *ret = realloc(ps->arr, 10 * sizeof(int));
//	if (ret != NULL)
//	{
//		ps->arr = ret;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i] = i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
////}
//struct s
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	int i = 0;
//	struct s* pa= (struct s*)malloc(sizeof(struct s) + 10 * sizeof(int));
//	pa->n = 100;
//	for (i = 0; i < 10; i++)
//	{
//		pa->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pa->arr[i]);
//	}
//	printf("%d ", pa->n);
//	free(pa);
//	pa = NULL;
//	return 0;
////}
//#define _CRT_SECURE_NO_WARNINGS. 1
//int main()
//{
//	FILE *pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//		//printf("%s\n", strerror(errno));
//	}
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
////}
//int main()
//{
//	int arr[10] = { 0 };
//	int a = 10;
//	while (a)
//	{
//		printf("%d ", arr[a]=a);
//		a--;
//		if (a == 1)
//		{
//			break;
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int arr[10] = { 0 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	do
//	{
//		printf("%d ", arr[a] = a - 1);
//		a++;
//	} while (a<10+1);
//	return 0;
//}
////}
//struct A
//{
//	int b;
//	float c;
//	char d;
//};
//int main()
//{
//	struct A r = { 0 };
//	fscanf_s(stdin, "%d %f %d", & (r.b), &(r.c), &r.d);
//	fprintf(stdout, "%d %f %d", r.b, r.c, r.d);
//	return 0;
////}
//struct S
//{
//	int i;
//	float r;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f,"abdkd" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	sprintf_s(buf, "%d %f %s", s.i, s.r, s.arr);
//	sscanf_s(buf, "%d %f %s", &(tmp.i), &(tmp.r), tmp.arr);
//	printf("%d %f %s", tmp.i,tmp.r,tmp.arr);
//	return 0;
////}
//int main()
//{
//	char arr[10] = { 'a','b','c','d'};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
////}
//int main()
//{
//	FILE* pf = fopen_s("txt1.txt", "r",4);
//	if (pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//
//	return 0;
////}
//#define d 5
//int main()
//{
//	int i = 0;
//	char* arr[d] = {
//		"abcd",
//		"efgf",
//		"dfsahg",
//		"dlfafa",
//		"dafsd"
//	};
//	char** dei = arr;
//	for (i = 0; i < d; i++)
//	{
//		if (dei == '\0')
//		{
//			printf("%s\n", dei[i]);
//		}
//		else
//		{
//			printf("%s\n", dei[i + 1 * 2]);
//		}
//	}
//	return 0;
////}
//int main()
//{
//	FILE *pf = open("set.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	printf("%ds\n", pf);
//	close(pf);
//	pf = NULL;
////}
//
//int main()
//{/*
//	printf("hehe\n");
//	printf("%d ", sizeof(float));*/
//	//i/*nt a = 0;
//	//float b = (float) (3.5);*/
//		
//	/*float a = -5, b = 3;
//	a = a / b;*/
//	{
//		int unm = 0;
//	}
//	printf("%d ", unm);
//	printf("%d ", 3 * 5 - 6 % 4 + 5);
//	printf("%d ", 3*5-6%4);
//	return 0;
////
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
////}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
////}
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int N = 5;
//    //scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < N - i; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i; j++)
//        {
//            printf("%c", (char)(j + 'A'));
//        }
//        for (int j = i; j >= 0; j--)
//        {
//            printf("%c", (char)(j + 'A'));
//        }
//        printf("\n");
//    }
//    return 0;
////}
//void adjust(int arr[], int sz)
//{
//	int lsfa = 0;//首数字
//	int right = sz-1;//最后一个下标
//	while(lsfa < right)
//	//奇数
//	{
//		while ((lsfa < right)&&(arr[lsfa] % 2 == 1))
//		{
//			lsfa++;
//		}
//
//		while ((lsfa < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (lsfa < right)
//		{
//			int tmp = arr[lsfa];
//			arr[lsfa] = arr[right];
//			arr[right] = tmp;
//		}
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
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr, sz);
//	print(arr, sz);
//	return 0;
////}
//int my_strlen(char* len)
//{
//	int count = 0;
//	while (*len != '\0')
//	{
//		count++;
//		len++;
//	}
//	return count;
//}
//int main()
//{
//	char a[10] = "\0";
//	scanf("%s",a);
//	int ret = my_strlen(a);
//	printf("%d\n", ret);
//	return 0;
////}
//char* my_strcpy(char* arr2, const char* arr1)
//{
//	char* lrn = arr2;
//	while (*arr2++ = *arr1++)
//	{
//	       ;
//	 }
//	return lrn;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[100] = "\0";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
////}
//int main()
//{
//	int a= 10000;
//	FILE* p = fopen("tset.txt", "wb");
//	fwrite(&a, 4, 1, p);
//	fclose(p);
//	p = NULL;
//	return 0;
////}  
int main()
{
	int* a = NULL;
	int b = 10;
	a = b;
	printf("%d\n", a);
	return 0;
}
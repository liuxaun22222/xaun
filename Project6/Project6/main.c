#include <stdio.h>
//#define MAI 60
//int main()
//{
//	printf("%d", MAI);
//	return 0;
////}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}
//int main()
//{
//	char n = 0;
//	scanf_s("%c", &n);
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		int j = 0;
//		for (j = 0 ; j <5-1-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ",n);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	printf("%d", 1 << a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
/*int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int  j = 0;
		int sum = 0;
		for (j = 10; j <= 10000; j *= 10)
		{
			sum += ((i / j) * (i % j));
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int ret = (a + b) % 100;
//	printf("%d\n", ret);
//	return 0;
//}
//
// #
// 
//#include <string.h>
//#include <assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(*p1 != NULL);
//	assert(*p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 ==*s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//ÕÒµ½×Ö´®
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//ÕÒ²»µ½×Ö´®
//		}
//		cur++;
//	}
//	
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcdef";
//	char* ret = my_strstr(p1,p2);
//	if (ret == NULL)
//	{
//		printf("ÕÒ²»µ½×Ö·û´®\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr[] = "cjfh@sfa.fhaf";
//	char* p = "@.";
//	char* q = strtok(arr, p);
//	printf("%s\n", q);
//	return 0;
//}
#include <ctype.h>
///int main()
//{
//	/*int ch = ' ';
//	int ret = isspace(ch);
//	printf("%d\n", ret);*/
//	char arr[] = "L Love You";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i]  = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", a
#include <string.h>
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
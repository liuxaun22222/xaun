#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
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
//}
char* my_strcpy(char* coy1,const char* coy2, int k)
{
	char* str = coy1;
	int count = 0;
	while (*coy2 != '\0')
	{
		if (count >= k)
		{
			*coy1 = *coy2;
			coy1++;
		}
		coy2++;
		count++;
	}
	return str;
}
int main()
{
	char arr1[30] = { 0 };
	char arr2[30] = { 0 };
	int k = 0;
	scanf("%s", arr2);
	scanf("%d", &k);
	my_strcpy(arr1, arr2, k);
	printf("%s\n", arr1);
	return 0;
}
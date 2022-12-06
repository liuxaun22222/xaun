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
//}
int main()
{
	int z = 0;
	int y = 0;
	int x = 0;
	z = (x -= x - 5), (x = y, y + 3);
	printf("z = %d,x = %d,y=%d\n", z, x, y);
	return 0;
}
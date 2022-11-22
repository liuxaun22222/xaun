#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	int a = 0;
//	for (a = 1; a < 100; a++)
//	{
//		++a;
//		printf("%d ", a);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= a; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	for (a = 0; a <= 15; a++)
//	{
//		printf("hehe\n");
//		arr[a] = 0;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	printf("%p \n", &arr);
//	printf("%p\n", &a);
//	return 0;
//}
//#include <assert.h>
//
//
//	char* ret = dest;
//		assert(dest != NULL);
//		assert(src != NULL);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return ret;
//}
//int main()
//{
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}char* my_strcpy(char* dest, const char* src)
//{
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//
//float f(float x, float y, float z) {
//	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z) {
//	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//		if (f(x, y, z) <= 0.0f)
//			return y;
//	return 0.0f;
//}
//
//int main() {
//	{
//		HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//		_TCHAR buffer[25][80] = { _T(' ') };
//		_TCHAR ramp[] = _T(".:-=+*#%@");
//
//		for (float t = 0.0f;; t += 0.1f) {
//			int sy = 0;
//			float s = sinf(t);
//			float a = s * s * s * s * 0.2f;
//			for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
//				_TCHAR* p = &buffer[sy++][0];
//				float tz = z * (1.2f - a);
//				for (float x = -1.5f; x < 1.5f; x += 0.05f) {
//					float tx = x * (1.2f + a);
//					float v = f(tx, 0.0f, tz);
//					if (v <= 0.0f) {
//						float y0 = h(tx, tz);
//						float ny = 0.01f;
//						float nx = h(tx + ny, tz) - y0;
//						float nz = h(tx, tz + ny) - y0;
//						float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//						float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//						*p++ = ramp[(int)(d * 5.0f)];
//					}
//					else
//						*p++ = ' ';
//				}
//			}
//
//			for (sy = 0; sy < 25; sy++) {
//				COORD coord = { 0, sy };
//				SetConsoleCursorPosition(o, coord);
//				WriteConsole(o, buffer[sy], 79, NULL, 0);
//			}
//			Sleep(33);
//
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 100; a += 2)
//	{
//		printf("%d ",a);
//	}
//	return 0;
//}
int main()
{
	int  day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");		
			break;
	case 5:
		printf("星期五\n");		
		break;
	case 6:
		printf("星期六\n");		
		break;
	case 7:
		printf("星期七\n");		
		break;
	}
	return 0;
}
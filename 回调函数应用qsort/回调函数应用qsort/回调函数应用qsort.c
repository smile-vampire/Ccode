#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) )����ԭ�ͣ�
int _clpmnt(const void *p1, const void *p2)//�Ƚ�p1.p2��С
{
	return *(int*)p1 - *(int*)p2;
}
void Show(int *arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 16, 9, 12, 5, 8, 7, 4, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, len, sizeof(int), _clpmnt);
	Show(arr, len);
	return 0;
}
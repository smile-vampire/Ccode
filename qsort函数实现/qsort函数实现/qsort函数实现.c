#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) )函数原型;
/*
base:代表你要排序的数据
num：是排序数据的总数
size：要排序数据的字节大小
int ( *p )(const void *p1, const void *p2 )
函数指针
*/
int _cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 - *(int *)p2);
}
void Swap(void* p1,void* p2,int size)
{//一个字节一个字节进行交换
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void MyQsort(void *base, int len, int size, int(*cmp)(const void *p1, const void *p2))
{
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		int j = 0;
		for (j = 0; j < len - i - 1; j++)
		{
			if (_cmp((char*)base + j*size,
				    (char*)base +(j+1)*size)>0)
			{
				Swap((char*)base + j*size,
					(char*)base + (j + 1)*size, size);
			}
		}
	}
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
		int arr[] = { 16, 8, 12, 6, 7, 9, 5, 3, 1, 2 };
		int len = sizeof(arr) / sizeof(arr[0]);
		MyQsort(arr, len, sizeof(int),_cmp);
		Show(arr, len);
		return 0;
}
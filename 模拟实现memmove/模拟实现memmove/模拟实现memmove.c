#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dst, const void* src, int num)
{
	assert(dst);
	assert(src);
	char* tyte_dst = (char*)dst;
	const char* tyte_src = (char*)src;
	if (tyte_dst > tyte_src&&tyte_src < tyte_src + num)
	{
		int i = 0;
		for (i = num - 1; i >= 0; i--)
		{
			tyte_dst[i] = tyte_src[i];
		}
	}
	else
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			tyte_dst[i] = tyte_src[i];
		}
	}
	return dst;
}
void Show(int arr[], int len)
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
	int arr[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	my_memmove(arr, arr+3, 20);
	Show(arr, len);
	return 0;
}

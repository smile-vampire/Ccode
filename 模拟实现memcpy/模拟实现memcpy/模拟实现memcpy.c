#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* dst, const void* src, int num)
{
	assert(dst);
	assert(src);
		char* tyte_dst = (char*)dst;
		const char* tyte_src = (char*)src;
		while (num--)
		{
			*tyte_dst++=*tyte_src++;
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
{	int arr[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	my_memcpy(arr2, arr, 4);
	Show(arr2, len);
	return 0;
}

#include<stdio.h>
#include<string.h>
void Reverse(int arr[10], int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;
	while (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void Init(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
}
void Empty(int arr[10], int len)
{
	memset(arr, 0, len*sizeof(arr));
}
int Han(arr)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr);
	}
}
void  show(int arr[], int len)
{
	int i = 0;
	for (i = 0; i <= len; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr, len);//数组逆置
	show(arr, len);
	Init(arr);//数组初始化
	show(arr, len);
	Empty(arr,len);//清空数组
	show(arr, len);
	return 0;
}
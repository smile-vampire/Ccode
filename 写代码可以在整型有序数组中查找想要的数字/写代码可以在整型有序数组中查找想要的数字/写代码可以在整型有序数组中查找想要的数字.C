#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int let(int arr[], int key, int left, int right)
//{
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//}
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int k;
//	scanf("%d", &k);
//	int ret = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	ret = let(arr, k, left, right);
//	if (ret == -1)
//	{
//		printf("-1\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}
int binsearch(int key, int arr[], int len)
{
	int left = 0;
	int right =len-1 ;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left>right)
	{
		return -1;
	}

}
int main()
{
	int arr[] = { 2, 8, 11, 56, 66, 77, 88, 99 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int index = binsearch(11, arr, len);
	printf("%d\n", index);
	return 0;
}

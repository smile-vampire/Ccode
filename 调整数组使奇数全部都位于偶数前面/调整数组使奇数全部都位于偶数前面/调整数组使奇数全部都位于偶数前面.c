#include<stdio.h>
//void Function(int arr[], int len)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < len; i++)
//	{
//		tmp = arr[i];
//		int j = 0;
//		for (j = i-1; j >= 0; j--)
//		{
//			if (arr[j]%2==0)
//			{
//				arr[j+1] = arr[j];
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[j+1] = tmp;
//	}
//}
//void Show(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Function(arr, len);
//	Show(arr, len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr_1[5] = { 1, 2, 3, 4, 5 };
//	int arr_2[5] = { 6, 7, 8, 9, 10 };
//	int arr_3[5] = { 0 };
//	int i;
//	for (i = 0; i < sizeof(arr_1) / sizeof(arr_1[0]); i++)
//	{
//		arr_3[i] = arr_1[i];
//		arr_1[i] = arr_2[i];
//		arr_2[i] = arr_3[i];
//	}
//	for (i = 0; i < sizeof(arr_1) / sizeof(arr_1[0]); i++)
//	{
//		printf("%d", arr_1[i]);
//	}
//	
//	printf("\n");
//	for (i = 0; i < sizeof(arr_2) / sizeof( arr_2[0]); i++)
//	{
//		printf("%d", arr_2[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 10 };
	int i=0;
	for (i = 0; i<sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		arr1[i] = arr1[i] + arr2[i];
		arr2[i] = arr1[i] - arr2[i];
		arr1[i] = arr1[i] - arr2[i];
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0; i<sizeof(arr2) / sizeof(arr2[0]); i++)
		printf("%d", arr2[i]);
	return 0;
}

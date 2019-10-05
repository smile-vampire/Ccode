#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void find1(int arr[3][3], int *px, int * py, int key)
//{
//	int row = 0;
//	int col = *py - 1;
//
//	while (row < *px && col >= 0)
//	{
//		if (arr[row][col] == key)
//		{
//			*px = row;
//			*py = col;
//			return;
//		}
//		else if (arr[row][col]  > key)//15 > 7
//		{
//			col--;
//		}
//		else//7 < 18
//		{
//			row++;
//		}
//	}
//	//没有找到
//	*px = -1;
//	*py = -1;
//}
void find(int *arr, int *px, int * py, int key)
{
	int row = 0;
	int col = *py - 1;

	while (row < *px && col >= 0)
	{
		if (arr[row*(*py)+col] == key)
		{
			*px = row;
			*py = col;
			return;
		}
		else if (arr[row*(*py) + col]  > key)//15 > 7
		{
			col--;
		}
		else//7 < 18
		{
			row++;
		}
	}
	//没有找到
	*px = -1;
	*py = -1;

}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 3;
	int y = 3;
	find((int *)arr, &x, &y, 4);
	printf("%d,%d\n", x, y);
}
//int Search(int arr[][3],int row,int col, int num)
//{
//	int i = 0;
//	int j = col - 1;
//	while (i<3 && j>=0)
//	{
//		if (arr[i][j] == num)
//		{
//			return 1;
//		}
//		else if (arr[i][j] < num)
//		{
//			i++;
//		}
//		else
//		{
//			j--;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[][3] = { { 1, 2, 3 },
//	                 { 4, 5, 6 },
//	                 { 7, 8, 9 } };
//	int row = 3;
//	int col = 3;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Search(arr,row,col,n);
//	if (ret == 1)
//	{
//		printf("查找的这个数存在\n");
//	}
//	else
//	{
//		printf("查找的这个数不存在\n");
//
//	}
//	return 0;
//}
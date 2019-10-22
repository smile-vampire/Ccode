#include<stdio.h>
void FindTwo(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int j = 0;
		int count = 0;
		for (j = 0; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d ", arr[i]);
		}
	}
}
int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	FindTwo(arr, len);
	return 0;
}
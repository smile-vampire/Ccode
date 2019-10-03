#include<stdio.h>
int Fun(int arr[],int len)
{
	int i = 0;
	int x = 0;
	for (i = 0; i < len; i++)
	{
		x = x^arr[i];
	}
	return x;
}
int main()
{
	int arr[] = { 2, 2, 3, 3, 4, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", Fun(arr,len));
	return 0;
}
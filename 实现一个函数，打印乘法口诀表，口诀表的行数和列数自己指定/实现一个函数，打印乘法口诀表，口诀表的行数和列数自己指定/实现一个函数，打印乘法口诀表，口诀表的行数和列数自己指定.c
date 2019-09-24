#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Product(int x)
{
	int m = 1;
	int n = 1;
	int sum = 0;
	for (n= 1; n <= x; n++)
	{
		for (m = 1; m<= n; m++)
		{
			sum =m*n;
			printf("%2d*%2d=%2d", m, n, sum);
		}
		printf("\n");
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	Product(x);
	return 0;
}
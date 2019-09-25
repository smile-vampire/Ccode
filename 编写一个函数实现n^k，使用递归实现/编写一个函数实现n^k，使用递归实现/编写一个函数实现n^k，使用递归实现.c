#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fun(int n,int m)
{
	if (m == 1)
	{
		return n;
	}
	else
	{
		return n* Fun(n,m - 1);
	}
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int sum = Fun(a,b);
	printf("%d", sum);
	return 0;
}
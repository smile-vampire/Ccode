#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int digitsum(n)
{
	int sum = 0;
	int m = 0;
	if (n !=0 )
	{   
		m = n % 10;
		sum= m+digitsum(n/10);
	}
	return sum;
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", digitsum(a));
	return 0;
}
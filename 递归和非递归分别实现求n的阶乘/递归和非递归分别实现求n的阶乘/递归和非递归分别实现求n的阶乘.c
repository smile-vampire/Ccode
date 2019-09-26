//////////////递归法实现
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fax(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*Fax(n - 1);
	}
}
int main()
{
	int a;
	scanf("%d", &a);
	Fax(a);
	printf("%d", Fax(a));
	return 0;
}
////////////////非递归法实现
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fax(int n)
{
	int sum = 1;
	int i = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	int a;
	scanf("%d", &a);
	Fax(a);
	printf("%d", Fax(a));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int PirmeNumber(int number)
{
	int i = 2;
	for (i=2; i < number; i++)
	{
		if (number%i == 0)
		{
			return 0;
			break;
		}
		else if (number == i)
		{
			return 1;
		}
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	int ret = PirmeNumber(x);
	if (ret == 0)
	{
		printf("is not pirme number");
	}
	else
		printf("is pirme number");
	return 0;
}
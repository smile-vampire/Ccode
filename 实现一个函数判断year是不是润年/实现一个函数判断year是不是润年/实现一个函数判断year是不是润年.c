#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int LeapYear(int year)
{
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = LeapYear(n);
	if (ret ==1)
	{
		printf("������");
	}
	else
	{
		printf("��������");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Os(int num)
{
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		(num>>i) & 1;
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}
void Js(int num)
{
	int i = 0;
	for (i = 30; i >= 0; i -= 2)
	{
		(num >> i) & 1;
		printf("%d", (num >> i) & 1);
	}
}
int main()
{
	int number = 11;
	Os(number);
	Js(number);
	return 0;
}
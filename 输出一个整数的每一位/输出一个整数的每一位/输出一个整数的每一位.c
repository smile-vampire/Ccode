#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Fun(int num)
{
	while (num != 0)
	{
		num % 10;
		printf("%d ", num % 10);
		num = num / 10;
	}
	printf("\n");
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	Fun(num);
	return 0;
}
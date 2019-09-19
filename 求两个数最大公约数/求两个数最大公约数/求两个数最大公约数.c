#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("输入两个数：\n");
	scanf("%d%d", &a, &b);
	c = (a > b) ? b : a;
	while (a%c != 0 || b%c != 0)
	{
		c--;
	}
	printf("%d", c);
	return 0;
}
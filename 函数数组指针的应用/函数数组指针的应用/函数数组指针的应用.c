#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a / b;
}

int main()
{
	int input = 1;
	int x = 0;
	int y = 0;
	int ret = 0;
	int(*p[5])(int, int) = { 0, add, sub, mul, div };
	while (input)
	{
		printf("*************************************\n");
		printf("******1.add************2.sub*********\n");
		printf("******3.mul************4.div*********\n");
		printf("*************************************\n");
		printf("请输入操作：\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：\n");
			scanf("%d%d", &x,&y);
			ret = (*p[input])(x, y);
			printf("%d\n", ret);
		}	
	}
}
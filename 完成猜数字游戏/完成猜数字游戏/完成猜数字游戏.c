#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number= rand();
	int a;
	do{
		printf("请输入一个数\n");
		scanf("%d", &a);
		if (a > number)
		{
			printf("你猜的数字太大了\n");
		}
		else if (a < number)
		{
			printf("你猜的数字太小了\n");
		}
	} 
	while (number!=a);
	printf("恭喜你猜对了\n");
	return 0;
}
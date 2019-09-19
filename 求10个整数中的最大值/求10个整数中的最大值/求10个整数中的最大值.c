#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int shuzi[10];
	int max = shuzi[0];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &shuzi[i]);
	}
	for (i = 0; i < 10; i++)
	{
	
		if (shuzi[i] >max)
			max = shuzi[i];
	}
	printf("max=%d", max);
	return 0;
}
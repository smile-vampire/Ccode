#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c,t;
	printf("����������:\n");
		scanf("%d%d%d", &a,&b,&c);
		if (b > a)
		{
			t = a;
			a = b;
			b = t;
		}
		if (c > a)
		{
			t = a;
			a = c;
			c = t;
		}
		if (c > b)
		{
			t = b;
			b = c;
			c = t;
		}
		printf("�Ӵ�С�����ǣ�%3d%3d%3d", a, b, c);
		return 0;
}

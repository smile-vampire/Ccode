#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	int a, b;
	printf(" ‰»Îa,b:\n");
	scanf("%d%d", &a, &b);
	a += b;
	b = a - b;
	a -= b;
	printf("a=%d,b=%d",a,b);
	return 0;
}





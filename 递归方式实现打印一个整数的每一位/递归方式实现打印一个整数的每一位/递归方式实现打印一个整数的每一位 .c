#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Fun(int n)
{
	if (n > 9)
	{
		Fun(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	Fun(1234);
	return 0;
}
//void Yk(int n)
//{
//	if (n > 9)
//	{
//		Yk(n / 10);
//		printf("%d", n % 10);
//	}
//	else
//	
//		printf("%d", n);
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	Yk(a);
//	return 0;
//}
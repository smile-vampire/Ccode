//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
///////////////递归法实现
//int Fac(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return (Fac(n-1) + Fac(n - 2));
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b = Fac(a);
//	printf("%d", b);
//	return 0;
//}
///////////非递归法
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fac(int n)
{
	int Fac1 = 1;
	int Fac2 = 1;
	int Fac = 0;
	int i = 3;
	for (i = 3; i <= n; i++)
	{
		Fac = Fac1 + Fac2;
		Fac1 = Fac2;
		Fac2 = Fac;
	}
	return Fac;
}
int main()
{
   int a;
	scanf("%d", &a);
	int b = Fac(a);
	printf("%d", b);
	return 0;
}
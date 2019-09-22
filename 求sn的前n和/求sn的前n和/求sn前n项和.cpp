//
//#define _CRT_SECURE_NO_WARNINGS 1#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//	int  a, i,len;
//	int Sn = 0;
//	int n = 0;
//	printf("输入这个数: ");
//	scanf("%d", &a);
//	printf("需要求这个数前几项和: ");
//	scanf("%d", &len);
//	for (i= 0; i <len; i++)
//	{
//		n = n*10 + a;
//		Sn += n;
//	}
//	printf("%d\n", Sn);
//	return 0;
///}
#define _CRT_SECURE_NO_WARNINGS 1#include<stdio.h>
#include<stdio.h>
int main()
{
	int a = 2;
	int n = 0;
	int sum = 0;
	int tmp=0;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		tmp = tmp* 10 + 2;
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;
}
 




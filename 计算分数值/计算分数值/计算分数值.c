//#include<stdio.h>
//int main()
//{
//	int i;
//	double sum;
//	double sum1 = 0;
//	double sum2 = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1-= 1.0 / i;
//		}
//		if (i % 2 != 0)
//		{
//			sum2 += 1.0 / i;
//		}
//		sum = sum1 + sum2;
//	}
//	printf("sum=%f", sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
	int flg = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += flg * 1.0/ i;
		flg = -flg;
	}
	printf("%f", sum);
	return 0;
}

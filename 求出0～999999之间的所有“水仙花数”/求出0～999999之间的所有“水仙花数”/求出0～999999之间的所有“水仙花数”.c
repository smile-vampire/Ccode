//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c, d, e, f, i, n;
//	for (n = 1; n <= 6; n++)
//	{
//	  for (i = 0; i < 1000000; i++)
//	 {
//		a = (i / 100000) % 10;
//		b = (i / 10000) % 10;
//		c = (i / 1000) % 10;
//		d = (i / 100) % 10;
//		e = (i / 10) % 10;
//		f = i % 10;
//		if (i == 0 || i == 1)
//		{
//			continue;
//		}
//		if (i == pow(a, n) + pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n) + pow(f, n))
//		{
//
//			printf("%d\n", i);
//		}
//		}
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 999999; i++)
	{
		//1、求i为几位数
		int tmp = i;
		int count = 0;
		while (tmp != 0)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		int sum = 0;
		while (tmp != 0)
		{
			sum += pow((double)(tmp % 10), (double)count);
			tmp=tmp/10;
		}
		//2、tmp的每一位求出  然后进行次方运算 
		//123   123%10=3   123/10%10=2     1  +  sum
		//pow(x,y);-->x^y       

		//3、sum==i   printf("%d\n",i);
		if (sum == i)
		{
			printf("%d\n", i);
		}
	 }
	return 0;
}



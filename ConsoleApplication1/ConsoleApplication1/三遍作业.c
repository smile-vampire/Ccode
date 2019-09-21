#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if(ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= 0 && ch <= 9)
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//#include<stdlib.h>
//int main()
//{
//	int num = rand();
//	int n=0;
//	
//	while (n!=num)
//	{
//		scanf("%d", &n);
//		if (n > num)
//		{
//			printf("太大了\n");
//		}
//		else if (n < num)
//		{
//			printf("太小了\n");
//		}
//	}
//	printf("答对了\n");
//	return 0;
//}
//int Fun(int a, int b)
//{
//	int sn = 0;
//	int i = 0;
//	int c = 0;
//	for (i = 0; i < b; i++)
//	{
//		c=a + c * 10;
//		sn += c;
//	}
//	return sn;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Fun(a, b));
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 999999; i++)
//	{
//		int count = 0;
//		int tmp =i;
//		while (tmp!=0)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp != 0)
//		{
//			sum += pow((double)(tmp % 10), (double)count);
//				tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	int count = 0
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 0 || i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0; 
//	int flg = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flg*1.0 / i;
//		flg = -flg;
//	}
//	printf("%f\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int a = 12;
//	int b = 18;
//	int c = 0;
//	c=(a > b) ? b : a;
//	while (a%c!=0||b%c!=0)
//	{
//		c--;
//	}
//	printf("%d\n", c);
//}
//int main()
//{
//	int a = 5;
//	int b = 7;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
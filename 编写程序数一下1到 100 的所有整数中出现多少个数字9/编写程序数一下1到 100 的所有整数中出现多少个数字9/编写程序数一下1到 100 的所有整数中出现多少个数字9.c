//#include<stdio.h>;
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//    return 0;
//}
#include<stdio.h>
int Function(int n)
{
	int i;
	int count = 0;
	for (i = 1; i <= n; i++)
	{

		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int ret=Function(100);
	printf("%d",ret);
  return 0;
}
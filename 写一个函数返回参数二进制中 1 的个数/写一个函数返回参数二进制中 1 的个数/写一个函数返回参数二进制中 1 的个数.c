#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((value >> i) & 1) != 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", count_one_bits(2));
//	return 0;
//}
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		++count;
		value=value&(value - 1);
	}
	return count;
}
int main()
{
	printf("%d\n", count_one_bits(2));
	return 0;
}

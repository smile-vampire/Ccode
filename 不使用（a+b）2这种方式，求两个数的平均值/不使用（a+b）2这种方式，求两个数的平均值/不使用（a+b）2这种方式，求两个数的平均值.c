#include<stdio.h>
int Fun(int a, int b)
{
	int sum = 0;
	sum = (a&b) + ((a^b) >> 1);
	return sum;
}
//int Fun(int a, int b)
//{
//	int sum = 0;
//	sum = a + b;
//	return sum >> 1;
//}
//
int main()
{
	printf("%d\n", Fun(6, 8));
	return 0;
}
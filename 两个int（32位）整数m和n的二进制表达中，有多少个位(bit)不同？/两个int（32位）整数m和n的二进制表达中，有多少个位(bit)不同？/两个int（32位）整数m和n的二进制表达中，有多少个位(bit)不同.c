#include<stdio.h>
int ErJin(int m, int n)
{
	int count = 0;
	int num = 0;
	num=m^n;
	while (num!=0)
	{
		count++;
		num = num&(num - 1);
	}
	return count;
}
int main()
{
	printf("%d\n", ErJin(15, 1));
	return 0;
}

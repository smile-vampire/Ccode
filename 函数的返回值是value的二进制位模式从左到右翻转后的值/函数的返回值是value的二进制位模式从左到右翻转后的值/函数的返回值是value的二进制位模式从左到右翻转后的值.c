#include<stdio.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i < 32; i++)
	{
		a=value & 1;
		value = value >> 1;
		b = b + (a << (31 - i));
	}
	return b;
}
int main()
{
	printf("%u",reverse_bit(25));
	return 0;
}
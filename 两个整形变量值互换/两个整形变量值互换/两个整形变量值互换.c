#include<stdio.h>
int main()
{
	int a = 5, b = 4, c;
	c=a;
	a=b;
	b = c;
	printf("a=%d,b=%d",a,b);
	return 0;
}
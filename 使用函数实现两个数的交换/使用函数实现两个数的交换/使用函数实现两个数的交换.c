#include<stdio.h>
void Exchange(int *p1,int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main()
{
	int a=10;
	int b=20;
	printf("a=%d,b=%d\n", a, b);
	Exchange(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
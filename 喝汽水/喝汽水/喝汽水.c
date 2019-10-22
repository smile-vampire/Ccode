#include<stdio.h>
int main()
{
	int money = 20;
	int num = 0;
	while (money != 0)
	{
		money --;
		num++;
		if (num%2==0)
		{
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}
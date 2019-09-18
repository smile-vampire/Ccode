#include<stdio.h>
int main()
{
	int i = 100, n;
	int count = 0;
	{for (i; i <= 200; i++)
	{
		for (n = 2; n < i; n++)               //for(n=2;n <=i/2;n++)
		{
			if (i%n == 0)
				break;//跳出当前循环
		}
		if (n == i)                          //if(n>i/2)
			count++;
			printf("%d\n", i);
		
	}
	}
	printf("count=%d", count);
	return 0;

}
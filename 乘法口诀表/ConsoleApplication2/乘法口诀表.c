#include<stdio.h>
main()
{
	int a, b, sum;
	
		for (a = 1; a<=9; a++)
		{
			for (b = 1; b <=a; b++)
			{	sum = a*b;
			printf("%d*%d=%d  ",b,a,sum);
		}
		printf("\n");
	}
	
}

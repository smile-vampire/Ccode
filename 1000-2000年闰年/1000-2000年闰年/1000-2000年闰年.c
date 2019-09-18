#include<stdio.h>
main()
{
	int i = 0;
	int year;
	for (year = 1000; year<= 2000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%5d", year);
			i++;
			if (i%10==0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
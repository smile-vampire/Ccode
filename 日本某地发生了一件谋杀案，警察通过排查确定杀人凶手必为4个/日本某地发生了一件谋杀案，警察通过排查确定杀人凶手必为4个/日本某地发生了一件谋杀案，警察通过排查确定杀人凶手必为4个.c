#include<stdio.h>
int main()
{
	int murder = 0;
	for (murder = 'A'; murder <= 'D'; murder++)
	{
		if ((murder != 'A') + (murder == 'C') + (murder != 'D') + (murder == 'D') == 3)
		{
			printf("%c", murder);
		}
	}
	return 0;
}
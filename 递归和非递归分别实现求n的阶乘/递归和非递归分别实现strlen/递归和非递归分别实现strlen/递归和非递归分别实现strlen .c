//////////////////////µ›πÈ µœ÷
#include<stdio.h>
int Faq(char* string)
{
	int count = 0;
	if (*string != '\0')
	{
		count=(1 + Faq(string + 1));
	}
	else
	{
		return 0;
	}
	return count;
}
int main()
{
	char *string = "abcdefht";
	int ret=Faq(string);
	printf("%d", ret);
	return 0;
}
//////////////////∑«µ›πÈ
#include<stdio.h>
int Faq(char* string)
{
	int count = 0;
	while (*string!= '\0')
	{
		count++;
		*string++;
	}
	return count;
}
int main()
{
	char* string = "abcdefht";
	int ret = Faq(string);
	printf("%d", ret);
	return 0;
}
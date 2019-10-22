#include<stdio.h>
#include<assert.h>
char* my_strchr(const char* str, int ch)
{
	assert(str);
	while (*str)
	{
		const char* ret = str;
		if(*str == ch)
		{
			return ret;
		}
		else
		{
			str++;
		}
	}
	return NULL;
}
int main()
{
	const char* str = "abcde";
	printf("%s\n", my_strchr(str, 'b'));
	return 0;
}
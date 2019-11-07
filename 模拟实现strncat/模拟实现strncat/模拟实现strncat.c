#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strncat(char* dest, char* src, size_t len)
{
	assert(dest&&src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	if (strlen(src) < len)
	{
		len = strlen(src);
	}
	while (len--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char str1[20] = "abcde";
	char str2[] = "fijh";
	printf("%s\n", my_strncat(str1, str2, 5));
	return 0;
}
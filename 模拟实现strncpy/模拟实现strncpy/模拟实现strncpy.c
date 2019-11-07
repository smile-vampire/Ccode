#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char *dest, const char *src, size_t n)
{
	assert(dest&&src);
	char* ret = dest;
	int offset = 0;
	if (n > strlen(src))
	{
		offset = n - strlen(src);
		n = strlen(src);
	}
	while (n--)
	{
		*dest++ = *src++;
	}
	while (offset--)
	{
		*dest++ = '\0';
	}
	return ret;
}
int main()
{
	char str1[10];
	char str2[] = "abcde";
	printf("%s\n", my_strncpy(str1, str2, 6));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strcat(char* dst, const char* src)
{
	assert(dst);
	assert(src);

	char* ret = dst;

	while (*dst)
	{
		dst++;
	}

	while (*dst++ = *src++);

	return ret;
}

int main()
{
	char* p1 = "hello";
	char p2[20];
	strcpy(p2, "wor\0ld");

	my_strcat(p2, p1);

	printf("%s\n", p2);

	return 0;
}
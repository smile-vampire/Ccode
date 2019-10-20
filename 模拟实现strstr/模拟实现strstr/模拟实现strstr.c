#define _CRT_SECURE_NO_WARNINGS 1
//可能出现的情况
//hello word
      //wor
//hello word
      //word
//aaabbcc
// aab
#include<stdio.h>
#include<assert.h>
const char* my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	const char* src = str1;
	const char* sub = str2;
	while (*src)
	{
		const char* ret = sub;
		const char* start = src;
		while (*src == *sub && *sub != '\0')
		{
			src++;
			sub++;
		}
		if (*sub == '\0')
		{//找到了匹配
			return  ret;
		}
		else
		{//没有匹配  继续往后走；
			src=start + 1;
			sub = str2;
		}
	}
	return NULL;//没有找到
}
int main()
{
	char* p1 = "hello world";
	char* p2 = "wor";
	printf("%s\n", my_strstr(p1, p2));
	return 0;
}
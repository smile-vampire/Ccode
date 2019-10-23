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
		const char* start = src;
		while (*sub != '\0'&&*src == *sub)
		{
			src++;
			sub++;
		}
		if (*sub == '\0')
		{
			return start;
		}
		else
		{
			src = start + 1;
			sub = str2;
		}
	}
	return NULL;
}
//	const char* ret = str1;
//	const char* start1 = ret;
//	const char* start2 = str2;
//	while (*start1)
//	{
//		while (*start1 && *start2 && *start1==*start2)
//		{
//			start1++;
//			start2++;
//		}
//		if (*start2 == '\0')//找到了
//		{
//			return ret;
//		}
//		else
//		{
//			start1 = ++ret;
//			start2 = str2;
//		}
//	}
//	return NULL;
//}
int main()
{
	char* p1 = "hello world";
	char* p2 = "wor";
	printf("%s\n", my_strstr(p1, p2));
	return 0;
}
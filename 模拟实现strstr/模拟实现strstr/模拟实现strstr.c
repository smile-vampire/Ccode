#define _CRT_SECURE_NO_WARNINGS 1
//���ܳ��ֵ����
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
		{//�ҵ���ƥ��
			return  ret;
		}
		else
		{//û��ƥ��  ���������ߣ�
			src=start + 1;
			sub = str2;
		}
	}
	return NULL;//û���ҵ�
}
int main()
{
	char* p1 = "hello world";
	char* p2 = "wor";
	printf("%s\n", my_strstr(p1, p2));
	return 0;
}
#include<stdio.h>
//ָ��-ָ��ķ�ʽ
int Mystrlen(const char* str)
{
	char* p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;
}
#if 0
//���ܴ�����ʱ����������
int Mystrlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1+Mystrlen(str+1);
	}
}
//��������ʽ
int Mystrlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}
#endif
int main()
{
	char* str = "hello";
	printf("%d\n", Mystrlen(str));
	return 0;
}
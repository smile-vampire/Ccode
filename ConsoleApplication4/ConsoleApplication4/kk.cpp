#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Mystrlen(char *p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char *p = "hello";
	printf("%d\n", Mystrlen(p));
	return 0;
}
//int Mystrlen(char *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	return 1+Mystrlen(p + 1);
//}
//int main()
//{
//	char *p = "hello";
//	printf("%d\n", Mystrlen(p));
//	return 0;
//}
//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//		string++;
//		reverse_string(string);
//		printf("%c", *(string - 1));
//	}
//}
//int main()
//	{
//		char *p = "i ma a student";
//		reverse_string(p);
//		return 0;
//	}
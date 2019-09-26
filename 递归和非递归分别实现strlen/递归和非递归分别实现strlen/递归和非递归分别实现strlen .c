///µÝ¹é
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>       
int MySrelen(char *p)
{
	int count;
	if (*p == '\0')
	{
		return 0;
	}
	return 1 + MySrelen(p + 1);
}
int main()
{
	char *p = "hello";
	int len = MySrelen(p);
	printf("%d\n", len);
	return 0;
}
///////////·ÇµÝ¹ésrtlenº¯Êý
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>       
//int MySrelen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char* p = "hello";
//	int len = MySrelen(p);
//	printf("%d\n", len);
//	return 0;
//}
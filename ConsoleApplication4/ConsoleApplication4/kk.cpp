#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
void Pinjun(int a, int b)
{
	int sum = 0;
	sum = ((a^b)>>1) + (a&b);
	printf("%d\n", sum);

}
int main()
{
	Pinjun(5,7);
	return 0;
}
union Un
{
	int a;
	char p;
};
int Islittle()
{
	union Un uu;
	uu.a=0x11223344;
	uu.p;
	if (uu.p == 0x44)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int ret = 0;
	if (ret == 0)
	{
		printf("is little\n");
	}
	else
	{
		printf("is big\n");
	}
	return 0;
}
int Islittle()
{
	int a = 0x11223344;
	char* p =(char*) &a;
	if (*p == 0x44)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int ret = 0;
	if (ret == 0)
	{
		printf("is little\n");
	}
	else
	{
		printf("is big\n");
	}
	return 0;
}
#endif
//int Mystrlen(char *p)
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
//	char *p = "hello";
//	printf("%d\n", Mystrlen(p));
//	return 0;
//}
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
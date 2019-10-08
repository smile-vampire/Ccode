#include<stdio.h>
/////////////////大小端判定第二种
union Un
{
	int a;
	char ch;
};
int Little()
{
	union Un uu;
	uu.a = 0x11223344;
	uu.ch;
	if (uu.ch == 0x44)
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
//////////////////////大小端判定第一种
int Little()
{
	int n = 0x11223344;
	char *p = (char*)&n;
	if (*p = 0x44)
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
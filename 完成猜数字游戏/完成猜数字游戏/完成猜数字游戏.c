#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number= rand();
	int a;
	do{
		printf("������һ����\n");
		scanf("%d", &a);
		if (a > number)
		{
			printf("��µ�����̫����\n");
		}
		else if (a < number)
		{
			printf("��µ�����̫С��\n");
		}
	} 
	while (number!=a);
	printf("��ϲ��¶���\n");
	return 0;
}
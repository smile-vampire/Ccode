#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
//{
//	int i = 0;
//	char arr[5] = { 0 };
//	char input[5] = {0};
//	scanf("%s", &arr);
//	printf("%s\n", arr);
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:\n");
//		scanf("%s", &input);
//		if (strcmp(arr,input) == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		 else
//		{
//			printf("��������������\n");
//			if (i == 2)
//			{
//				printf("���ξ������˳�����\n");
//			}
//		}
//	}
//	return 0;
//}
{
	char password[20] = { 0 };
	int count = 3;
	while(count != 3)
	{
		printf("���������������password");
	scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			count--;
			printf("�㻹��%d�λ���",count);
		}
	}
	return 0;
}
//int main()
//{
//	char password[20] = { 0 };
//	int count = 3;
//	while (count != 0)
//	{
//		printf("����������:"); 
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			count--;
//			printf("�������������룺");
//		}
//		if (count == 0)
//		{
//			printf("�����������\n");
//		}
//	}
//	return 0;
//}
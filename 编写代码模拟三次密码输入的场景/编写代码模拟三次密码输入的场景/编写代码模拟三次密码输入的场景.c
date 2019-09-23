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
//		printf("请输入密码:\n");
//		scanf("%s", &input);
//		if (strcmp(arr,input) == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		 else
//		{
//			printf("请重新输入密码\n");
//			if (i == 2)
//			{
//				printf("三次均错误，退出程序\n");
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
		printf("老铁，请输入你的password");
	scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			count--;
			printf("你还有%d次机会",count);
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
//		printf("请输入密码:"); 
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			count--;
//			printf("请重新输入密码：");
//		}
//		if (count == 0)
//		{
//			printf("输入次数过多\n");
//		}
//	}
//	return 0;
//}
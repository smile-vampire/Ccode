#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
int JudgeRotation(char* str, char* sub)
{
	int len = strlen(str);
	char* double_str = (char*)malloc(len * 2 + 1);
	strcpy(double_str, str);
	strcat(double_str, str);
	int ret = strstr(double_str, sub) == NULL ? 0 : 1;
	free(double_str);
	return ret;
}
int main()
{
	printf("%d\n", JudgeRotation("AABCD", "BCDAA"));
	return 0;
}
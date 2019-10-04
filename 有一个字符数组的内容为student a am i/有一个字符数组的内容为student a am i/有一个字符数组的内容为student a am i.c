#include<stdio.h>
int MyStrlen(char *str)
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}

void ReverseStr(char *str, char *left, char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void ReverseSentence(char *str)
{
	int len = MyStrlen(str);
	char *cur = str;
	char *left = str;
	char *right = str + len - 1;
	ReverseStr(str, left, right);

	while (*cur != '\0')
	{
		char *star = cur;
		while(*cur != ' '&& *cur != '\0')
	  { 
		cur++;
	  }
		ReverseStr(str, star, cur-1);
		if (*cur == ' ')
		{
			cur++;
		}
	}
}

int main()
{
	char str[] = "i am a student";
	ReverseSentence(str);
	printf("%s\n", str);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
char Reverse_string(char * string)
{
	if (*string != '\0')
	{
		string++;
		Reverse_string(string);
		printf("%c",*(string - 1));
	}
}

int main()
{
	char* swap = "abcdef";
	Reverse_string(swap);
	return 0;
}
#include<stdio.h>
#include<string.h>
void Left(char *arr,int len, int k)
{
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j<len-1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len-1] = tmp;
	}
}
int main()
{	
	char arr[] = "ABCD";
	int len = strlen(arr);
	Left(arr, len, 2);
	printf("%s\n", arr);
	return 0;
}
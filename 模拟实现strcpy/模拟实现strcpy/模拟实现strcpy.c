//1.参数顺序
//2.函数的功能，停止条件
//3.assert 
//4.const修饰指针
//5.函数返回值

#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest = *src)//需要\0 所以用赋值语句
	{
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char* src = "hello";
	char p[10];
	printf("%s\n", my_strcpy(p, src));
	return 0;
}
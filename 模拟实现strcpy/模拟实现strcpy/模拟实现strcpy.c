//1.����˳��
//2.�����Ĺ��ܣ�ֹͣ����
//3.assert 
//4.const����ָ��
//5.��������ֵ

#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest = *src)//��Ҫ\0 �����ø�ֵ���
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
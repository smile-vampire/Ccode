#include<stdio.h>
//�ַ�����
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//���������С
	printf("%d\n", sizeof(arr + 0));//a[0]��ַ
	printf("%d\n", sizeof(*arr));//a[0]��С
	printf("%d\n", sizeof(arr[1]));//a[1]��С
	printf("%d\n", sizeof(&arr));//a��ַ
	printf("%d\n", sizeof(&arr + 1));//��һ�������ַ
	printf("%d\n", sizeof(&arr[0] + 1));//a[1]��ַ
	return 0;
	//6 4  1 1 4 4 4
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr));   //����/0ֹͣ  ���ֵ   x
	printf("%d\n", strlen(arr + 0)); //x
	//printf("%d\n", strlen(*arr));    strlen ����Ϊָ��  a[0��С]
	//printf("%d\n", strlen(arr[1]));   a[1]��С                             �⼸��Ϊ�﷨����
	//printf("%d\n", strlen(&arr));     ���������ַ Ӧ������ָ�����
	//printf("%d\n", strlen(&arr+1));     ���������ַ Ӧ������ָ�����
	printf("%d\n", strlen(&arr[0] + 1));//x-1
	return 0;
}
1
2
3
4
5
6
7
8
9
10
11
12
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	return 0;
	//7 4 1 1 4 4 4
}
1
2
3
4
5
6
7
8
9
10
11
12
13
int main()
{
	char *p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	return 0;
	//4 4 1 1 4 4 4
}
��������������������������������
��Ȩ����������ΪCSDN������smilevampire����ԭ�����£���ѭ CC 4.0 BY - SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https ://blog.csdn.net/smilevampire/article/details/102534323